#include <iostream>
#include "Pacjent.h"
#include "Wizyta.h"
#include <algorithm>

using namespace std;

Pacjent pacjent;

Pacjent::Pacjent(string imie, string nazwisko, unsigned long long PESEL)
    : imie(imie), nazwisko(nazwisko), PESEL(PESEL) {
}

void Pacjent::wyswietlDane() {
    cout << "Dane pacjenta: " << this->imie << " " << this->nazwisko << ", " << this->PESEL << endl;
}

int Pacjent::umowWizyte(Wizyta *wizyta) {
    wizyty.push_back(wizyta);
    return 0;
}

void Pacjent::odwolajWizyte(int pozycja) {
    if (pozycja < 1 || pozycja > wizyty.size()) {
        cout << "Niepoprawna pozycja.\n";
        return;
    }
    // pobranie lekarza oraz terminu w celu ponownego jego dodania do listy terminów
    Wizyta *wizyta = wizyty[pozycja - 1];
    Termin termin = wizyta->getTerminWizyty();
    Lekarz *lekarz = wizyta->getLekarzWizyty();

    lekarz->dodajTermin(termin);

    // usunięcie wizyty z listy wizyt pacjenta
    wizyty.erase(wizyty.begin() + pozycja - 1);
    cout << "Wizyta została odwołana.\n";
}

void Pacjent::sprawdzWizyte() const {
    cout << "Wizyty for Pacjent " << imie << " " << nazwisko << ":\n";
    int index = 1;
    for (const auto &wizyta: wizyty) {
        cout << index << ") ";
        wizyta->pokazWizyte();
        index++;
    }
}

void Pacjent::sprawdzRecepte() {
    cout << "Recepty for Pacjent " << imie << " " << nazwisko << ":\n";
    for (const auto &wizyta: wizyty) {
        wizyta->pokazRecepty();
    }
}

void Pacjent::sprawdzSkierowanie() {
    cout << "Skierowania for Pacjent " << imie << " " << nazwisko << ":\n";
    for (const auto &wizyta: wizyty) {
        wizyta->pokazSkierowania();
    }
}

void Pacjent::modyfikujDane() {
    string noweImie, noweNazwisko;
    long nowyPESEL;

    cout << "Podaj nowe imię: ";
    cin >> noweImie;
    cout << "Podaj nowe nazwisko: ";
    cin >> noweNazwisko;
    cout << "Podaj nowy PESEL: ";
    cin >> nowyPESEL;

    imie = noweImie;
    nazwisko = noweNazwisko;
    PESEL = nowyPESEL;

    cout << "Dane pacjenta zostały zmodyfikowane.\n";
}

