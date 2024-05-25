#include <iostream>
#include <algorithm>
#include "Lekarz.h"

using namespace std;


Lekarz::Lekarz(string imie, string nazwisko, string specjalizacja, int IDLekarza, int gabinet)
    : imie(imie), nazwisko(nazwisko), specjalizacja(specjalizacja), IDLekarza(IDLekarza), gabinet(gabinet) {
}

void Lekarz::wyswietlDane() const {
    cout << "Dane lekarza: " << this->imie << " " << this->nazwisko << ", " << this->specjalizacja << ", " << this->
            IDLekarza << ", " << this->gabinet << endl;
}

void Lekarz::dodajTermin(Termin termin) {
    terminy.push_back(termin);
}

void Lekarz::wyswietlTerminy() const {
    cout << "Terminy dla " << imie << " " << nazwisko << ":\n";
    for (const auto &termin: terminy) {
        termin.wyswietl();
    }
}

void Lekarz::addWizyta(Wizyta *wizyta) {
    wizyty.push_back(wizyta);
}

void Lekarz::wystwietlWizyty() const{
    int i = 1;
    for (const auto &wizyta: wizyty) {
        cout << i << ") ";
        wizyta->pokazWizyte();
        i++;
    }
}

void Lekarz::usunTermin(int pos) {
    if (pos < 1 || pos > terminy.size()) {
        cout << "Niepoprawna pozycja.\n";
        return;
    }
    terminy.erase(terminy.begin() + (pos - 1));
}


void Lekarz::usunWizyte(int id) {
        wizyty.erase(wizyty.begin()+(id-1));
}


