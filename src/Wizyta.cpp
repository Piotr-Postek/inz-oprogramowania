#include <iostream>
#include <string>
#include "Wizyta.h"

using namespace std;

Wizyta::Wizyta(Pacjent pacjent, Lekarz lekarz, string termin, StatusWizyty status_wizyty, int koszt)
    :pacjent(pacjent), lekarz(lekarz)
{
    this->termin = termin;
    this->status_wizyty = status_wizyty;
    this->koszt = koszt;

};

void Wizyta::wyswietl(){
    pacjent.wyswietl();
    lekarz.wyswietl();
    cout << "Termin: " << termin << endl;
    cout << "Status wizyty: " << status_wizyty << endl;
    cout << "Koszt: " << koszt << endl;
};

Recepta::Recepta(Wizyta wizyta, string lek, int ilosc, string dawkowanie)
        :wizyta(wizyta)
{
    this->lek = lek;
    this->ilosc = ilosc;
    this->dawkowanie = dawkowanie;
};

void Recepta::wyswietl(){
    wizyta.wyswietl();
    cout << "Lek: " << lek << endl;
    cout << "Ilosc: " << ilosc << endl;
    cout << "Dawkowanie: " << dawkowanie << endl;
};

Skierowanie::Skierowanie(Wizyta wizyta, string badanie)
        :wizyta(wizyta)
{
    this->badanie = badanie;
};

void Skierowanie::wyswietl(){
    wizyta.wyswietl();
    cout << "Badanie: " << badanie << endl;
};
