#include <iostream>
#include <string>
#include "Wizyta.h"

using namespace std;

void Wizyta::wyswietl() {
    Pacjent::wyswietl();
    Lekarz::wyswietl();
    cout << "Termin: " << termin << endl;
    cout << "Status wizyty: " << status_wizyty << endl;
    cout << "Koszt: " << koszt << endl;
}

Recepta::Recepta(string imie, string nazwisko, unsigned long long pesel, string data_urodzenia, string m_zamieszkania,
                 string m_urodzenia, int nr_telefonu, string imie_lekarza, string nazwisko_lekarza, string specjalizacja,
                 int ID_lekarza, int gabinet, string termin, char status_wizyty, int koszt, string lek, int ilosc, string dawkowanie)
    : Wizyta(imie, nazwisko, pesel, data_urodzenia, m_zamieszkania, m_urodzenia, nr_telefonu, imie_lekarza, nazwisko_lekarza,
             specjalizacja, ID_lekarza, gabinet, termin, status_wizyty, koszt) {
    this->lek = lek;
    this->ilosc = ilosc;
    this->dawkowanie = dawkowanie;
}

void Recepta::wyswietl() {
    Wizyta::wyswietl();
    cout << "Lek: " << lek << endl;
    cout << "Ilosc: " << ilosc << endl;
    cout << "Dawkowanie: " << dawkowanie << endl;
}

Skierowanie::Skierowanie(string imie, string nazwisko, unsigned long long pesel, string data_urodzenia, string m_zamieszkania,
                         string m_urodzenia, int nr_telefonu, string imie_lekarza, string nazwisko_lekarza, string specjalizacja,
                         int ID_lekarza, int gabinet, string termin, char status_wizyty, int koszt, string badanie)
    : Wizyta(imie, nazwisko, pesel, data_urodzenia, m_zamieszkania, m_urodzenia, nr_telefonu, imie_lekarza, nazwisko_lekarza,
             specjalizacja, ID_lekarza, gabinet, termin, status_wizyty, koszt) {
    this->badanie = badanie;
}

void Skierowanie::wyswietl() {
    Wizyta::wyswietl();
    cout << "Badanie: " << badanie << endl;
}
