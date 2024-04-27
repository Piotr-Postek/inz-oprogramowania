#include "Lekarz.h"

Lekarz::Lekarz(string imie, string nazwisko, string specjalizacja, int ID_lekarza, int gabinet) {
    this->imie = imie;
    this->nazwisko = nazwisko;
    this->specjalizacja = specjalizacja;
    this->ID_lekarza = ID_lekarza;
    this->gabinet = gabinet;
}

void Lekarz::wyswietl() {
    cout << "Imie: " << imie << endl;
    cout << "Nazwisko: " << nazwisko << endl;
    cout << "Specjalizacja: " << specjalizacja << endl;
    cout << "ID lekarza: " << ID_lekarza << endl;
    cout << "Gabinet: " << gabinet << endl;
}

