//
// Created by piotr on 23.05.2024.
//
#include <iostream>
#include "KartaPacjenta.h"

using namespace std;

KartaPacjenta::KartaPacjenta(Pacjent* pacjent, std::string data, std::string miejsceZam, std::string miejsceUrodz, int nrTel)
    : pacjent(pacjent), dataUrodzenia(data), miejsceZamieszkania(miejsceZam), miejsceUrodzenia(miejsceUrodz), numerTelefonu(nrTel) {}

bool KartaPacjenta::sprawdzKarte() {
    // Implement method
    return true;
}

void KartaPacjenta::wyswietolKarte() {
    cout << "Karta pacjenta: " << endl;
    cout << this->pacjent << " " << this->dataUrodzenia << ", " << this->miejsceZamieszkania << ", " << this->miejsceUrodzenia << ", " << this->numerTelefonu << endl;
}