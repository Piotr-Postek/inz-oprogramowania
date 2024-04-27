#ifndef WIZYTA_H
#define WIZYTA_H

#include <iostream>
#include <string>
#include "Pacjent.h"
#include "Lekarz.h"

using namespace std;


class Wizyta : public Pacjent, public Lekarz{
private:
        string termin;
        Lekarz lekarz;
        Pacjent pacjent;
        char status_wizyty;
        int koszt;
    public:
        Wizyta(){}; // konstruktor domyślny
        Wizyta(string imie, string nazwisko, unsigned long long pesel, string data_urodzenia, string m_zamieszkania, string m_urodzenia,
               int nr_telefonu, string imie_lekarza, string nazwisko_lekarza, string specjalizacja, int ID_lekarza, int gabinet,
               string termin, char status_wizyty, int koszt){};
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
    Recepta(string imie, string nazwisko, unsigned long long pesel, string data_urodzenia, string m_zamieszkania, 
    string m_urodzenia, int nr_telefonu, string imie_lekarza, string nazwisko_lekarza, string specjalizacja, 
    int ID_lekarza, int gabinet, string termin, char status_wizyty, int koszt, string lek, int ilosc, string dawkowanie);
    void wyswietl();
};

class Skierowanie : public Wizyta{
private:
    Wizyta wizyta;
    string badanie;
public:
    Skierowanie(){}; // konstruktor domyślny
    Skierowanie(string imie, string nazwisko, unsigned long long pesel, string data_urodzenia, string m_zamieszkania,
    string m_urodzenia, int nr_telefonu, string imie_lekarza, string nazwisko_lekarza, string specjalizacja,
    int ID_lekarza, int gabinet, string termin, char status_wizyty, int koszt, string badanie);
    void wyswietl();
};

#endif