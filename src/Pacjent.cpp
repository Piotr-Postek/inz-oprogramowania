#include <iostream>
#include <string>

#include "Pacjent.h"

using namespace std;

Pacjent::Pacjent(string imie, string nazwisko, unsigned long long pesel) {
    this->imie = imie;
    this->nazwisko = nazwisko;
    this->pesel = pesel;
}

void Pacjent::wyswietl() {
    cout << "Dane pacjenta: " << imie << " " << nazwisko << " " << pesel << endl;
};

KartaPacjenta::KartaPacjenta(Pacjent pacjent, string data_urodzenia, string m_zamieszkania, string m_urodzenia, int nr_telefonu)
: pacjent(pacjent), data_urodzenia(data_urodzenia), m_zamieszkania(m_zamieszkania), m_urodzenia(m_urodzenia), nr_telefonu(nr_telefonu) {
    this->data_urodzenia = data_urodzenia;
    this->m_zamieszkania = m_zamieszkania;
    this->m_urodzenia = m_urodzenia;
    this->nr_telefonu = nr_telefonu;
};

void KartaPacjenta::wyswietl() {
    pacjent.wyswietl();
    cout << "Data urodzenia: " << data_urodzenia << endl;
    cout << "Miejsce zamieszkania: " << m_zamieszkania << endl;
    cout << "Miejsce urodzenia: " << m_urodzenia << endl;
    cout << "Numer telefonu: " << nr_telefonu << endl;
};