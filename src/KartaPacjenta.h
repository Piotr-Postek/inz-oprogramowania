#ifndef KARTAPACJENTA_H
#define KARTAPACJENTA_H

#include <iostream>
#include <string>
#include "Pacjent.h"

class Pacjent;

class KartaPacjenta {
private:
    Pacjent *pacjent;
    string dataUrodzenia;
    string miejsceZamieszkania;
    string miejsceUrodzenia;
    int numerTelefonu;

public:
    KartaPacjenta(Pacjent *pacjent, string data, string miejsceZam, string miejsceUrodz, int nrTel); //konstruktor
    bool sprawdzKarte(); //sprawdza czy karta jest wypelniona
    void wyswietolKarte(); //wyswietla karte pacjenta
};

#endif
