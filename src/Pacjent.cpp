#include "Pacjent.h"
#include <iostream>
#include <string>

using namespace std;

Pacjent::Pacjent(string imie, string nazwisko, unsigned long long pesel) {
    this->imie = imie;
    this->nazwisko = nazwisko;
    this->pesel = pesel;
}

void Pacjent::wyswietl() {
    cout << "Imie: " << imie << endl;
    cout << "Nazwisko: " << nazwisko << endl;
    cout << "Pesel: " << pesel << endl;
}

KartaPacjenta::KartaPacjenta(string imie, string nazwisko, unsigned long long pesel, string data_urodzenia, string m_zamieszkania, string m_urodzenia, int nr_telefonu)
: Pacjent(imie, nazwisko, pesel){
    this->data_urodzenia = data_urodzenia;
    this->m_zamieszkania = m_zamieszkania;
    this->m_urodzenia = m_urodzenia;
    this->nr_telefonu = nr_telefonu;
}

void KartaPacjenta::wyswietl() {
    Pacjent::wyswietl();
    cout << "Data urodzenia: " << data_urodzenia << endl;
    cout << "Miejsce zamieszkania: " << m_zamieszkania << endl;
    cout << "Miejsce urodzenia: " << m_urodzenia << endl;
    cout << "Numer telefonu: " << nr_telefonu << endl;
}