#ifndef PACJENT_H
#define PACJENT_H

#include <iostream>
#include <string>
#include "Wizyta.h"

using namespace std;

class Pacjent : public Wizyta{
private:
    string imie;
    string nazwisko;
    unsigned long long pesel;

public:
    Pacjent(){}; // konstruktor domyślny
    Pacjent(string imie, string nazwisko, unsigned long long pesel);
    void wyswietl();
};

class KartaPacjenta : public Pacjent {
private:
    Pacjent pacjent;
    string data_urodzenia;
    string m_zamieszkania;
    string m_urodzenia;
    int nr_telefonu;
public:
    KartaPacjenta(string imie, string nazwisko, unsigned long long pesel, string data_urodzenia, string m_zamieszkania, string m_urodzenia, int nr_telefonu);
    void wyswietl();
    int umowWizyte(Wizyta wizyta){

        cout << "Wybierz date wizyty z dostępnych terminów" << endl;
        pobierzDatyWizyt(); 
        Wizyta wizyta = {
            data_wizyty,
            godzina_wizyty,
            lekarz,
            opis_wizyty
            };
        }

    }
};

#endif