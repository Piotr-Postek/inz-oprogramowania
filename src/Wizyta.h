#ifndef WIZYTA_H
#define WIZYTA_H

#include <iostream>
#include <string>
#include "helpers.h"
#include "Pacjent.h"
#include "Lekarz.h"


using namespace std;


class Wizyta{
private:
    string termin;
    Lekarz lekarz;
    Pacjent pacjent;
    StatusWizyty status_wizyty;
    int koszt;
public:
    Wizyta(){}; // konstruktor domyślny
    Wizyta(Pacjent pacjent, Lekarz lekarz, string termin, StatusWizyty status_wizyty, int koszt);
    void wyswietl();
};

class Recepta : public Wizyta{
private:
    Wizyta wizyta;
    string lek;
    int ilosc;
    string dawkowanie;
public:
    Recepta(){}; // konstruktor domyślny
    Recepta(Wizyta wizyta, string lek, int ilosc, string dawkowanie);
    void wyswietl();
};

class Skierowanie{
private:
    Wizyta wizyta;
    string badanie;
public:
    Skierowanie(){}; // konstruktor domyślny
    Skierowanie(Wizyta wizyta, string badanie);
    void wyswietl();
};

#endif