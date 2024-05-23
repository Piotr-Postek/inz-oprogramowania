//
// Created by piotr on 23.05.2024.
//

#include <iostream>
#include "Wizyta.h"
#include "Recepta.h"
#include "Skierowanie.h"

using namespace std;

Wizyta::Wizyta(Termin* termin, Lekarz* lekarz, Pacjent* pacjent, char status, int koszt)
    : termin(termin), lekarz(lekarz), pacjent(pacjent), status(status), koszt(koszt) {}

void Wizyta::wystawRecepte() {
    string lek;
    int ilosc;
    string dawka;

    cout << "Podaj nazwę leku: ";
    cin >> lek;
    cout << "Podaj ilość: ";
    cin >> ilosc;
    cout << "Podaj dawkę: ";
    cin >> dawka;

    Recepta* recepta = new Recepta(this, lek, ilosc, dawka);
    recepta->wyswietlRecepte();
    // You can store or manage the created Recepta object as needed
}

void Wizyta::wystawSkierowanie() {
    //Skierowanie(Lekarz* lekarz, Pacjent* pacjent, std::string badanie);
    string badanie;
    cout << "Podaj nazwę badania: ";
    cin >> badanie;

    Skierowanie* skierowanie = new Skierowanie(lekarz, pacjent, badanie);
    skierowanie->wyswietlSkierowanie();
}

void Wizyta::wystawRachunek() {

    int koszt;
    cout << "Podaj koszt wizyty: ";
    cin >> koszt;

}

void Wizyta::pokazWizyte() const {
    cout << "Wizyta: Termin: " << termin
              << ", Lekarz: " << lekarz->getImie() << " " << lekarz->getNazwisko()
              << ", Pacjent: " << pacjent->getImie() << " " << pacjent->getNazwisko()
              << ", Status: " << status << ", Koszt: " << koszt << endl;
}
