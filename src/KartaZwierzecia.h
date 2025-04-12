#ifndef KARTAZWIERZECIA_H
#define KARTAZWIERZECIA_H

#include <iostream>
#include <string>
#include "Zwierze.h"

class Zwierze;

class KartaZwierzecia {
private:
    Zwierze *zwierze;
    string dataUrodzenia;
    //string miejsceZamieszkania;
    //string miejsceUrodzenia;
    int numerTelefonu;
    string choroby;
public:
    KartaZwierzecia(Zwierze *zwierze, string data, string choroby, int nrTel); //konstruktor
    bool sprawdzKarte(); //sprawdza czy karta jest wypelniona
    void wyswietolKarte(); //wyswietla karte zwierzęcia
};

#endif
