#ifndef PACJENT_H
#define PACJENT_H

#include <iostream>
#include <string>


using namespace std;

class Pacjent {
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
};

#endif