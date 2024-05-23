//
// Created by piotr on 23.05.2024.
//
#include <iostream>
#include "Lekarz.h"

using namespace std;

Lekarz::Lekarz(std::string imie, std::string nazwisko, std::string specjalizacja, int IDLekarza, int gabinet)
    : imie(imie), nazwisko(nazwisko), specjalizacja(specjalizacja), IDLekarza(IDLekarza), gabinet(gabinet) {}

void Lekarz::wyswietlDane() const{
    cout << "Dane lekarza: " << this->imie << " " << this->nazwisko << ", " << this->specjalizacja << ", " << this->IDLekarza << ", " << this->gabinet << endl;
}