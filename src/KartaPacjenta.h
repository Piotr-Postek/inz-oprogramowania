//
// Created by piotr on 23.05.2024.
//
#ifndef KARTAPACJENTA_H
#define KARTAPACJENTA_H

#include <string>
#include "Pacjent.h"

class KartaPacjenta {
private:
    Pacjent* pacjent;
    std::string dataUrodzenia;
    std::string miejsceZamieszkania;
    std::string miejsceUrodzenia;
    int numerTelefonu;

public:
    KartaPacjenta(Pacjent* pacjent, std::string data, std::string miejsceZam, std::string miejsceUrodz, int nrTel);
    bool sprawdzKarte();

    void wyswietolKarte();

};

#endif // KARTAPACJENTA_H
