#include <iostream>
#include "Zwierze.h"
#include "Wizyta.h"
#include <algorithm>
#include "WizytaManager.h"

using namespace std;

Zwierze zwierze;

Zwierze::Zwierze(string imie, long numerID, unsigned long long PESEL)
    : imie(imie), numerID(numerID), PESEL(PESEL) {
}

void Zwierze::wyswietlDane() {
    cout << "Dane zwierzecia: " << this->imie << " " << this->numerID << ", " << this->PESEL << endl;
}

int Zwierze::umowWizyte(Wizyta *wizyta) {
    wizyty.push_back(wizyta);
    wizyta->getLekarzWizyty()->addWizyta(wizyta);
    WizytaManager::getInstance().dodajWizyte(*wizyta);
    return 0;
}

void Zwierze::odwolajWizyte(int pozycja) {
    if (pozycja < 1 || pozycja > wizyty.size()) {
        cout << "Niepoprawna pozycja.\n";
        return;
    }
    // pobranie lekarza oraz terminu w celu ponownego jego dodania do listy terminów
    Wizyta *wizyta = wizyty[pozycja - 1];
    Termin termin = wizyta->getTerminWizyty();
    Lekarz *lekarz = wizyta->getLekarzWizyty();

    lekarz->dodajTermin(termin);\
    lekarz->usunWizyte(pozycja);

    // usunięcie wizyty z listy wizyt pacjenta
    wizyty.erase(wizyty.begin() + pozycja - 1);
    cout << "Wizyta została odwołana.\n";
}

void Zwierze::sprawdzWizyte() const {
    cout << "Wizyty for Zwierze " << imie << " " << numerID << ":\n";
    int index = 1;
    for (const auto &wizyta: wizyty) {
        cout << index << ") ";
        wizyta->pokazWizyte();
        index++;
    }
}

void Zwierze::sprawdzRecepte() {
    cout << "Recepty for Zwierze " << imie << " " << numerID << ":\n";
    for (const auto &wizyta: wizyty) {
        wizyta->pokazRecepty();
    }
}

void Zwierze::sprawdzSkierowanie() {
    cout << "Skierowania for Zwierze " << imie << " " << numerID << ":\n";
    for (const auto &wizyta: wizyty) {
        wizyta->pokazSkierowania();
    }
}

void Zwierze::modyfikujDane() {
    string noweImie;
    long nowyPESEL, noweID;

    cout << "Podaj nowe imię: ";
    cin >> noweImie;
    cout << "Podaj nowe ID: ";
    cin >> noweID;
    cout << "Podaj nowy PESEL: ";
    cin >> nowyPESEL;

    imie = noweImie;
    numerID = noweID;
    PESEL = nowyPESEL;

    cout << "Dane pacjenta zostały zmodyfikowane.\n";
}

