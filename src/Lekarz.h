#ifndef LEKARZ_H
#define LKEARZ_H

#include <string>

using namespace std;

class Lekarz {
private:
    string imie;
    string nazwisko;
    string specjalizacja;
    int ID_lekarza;
    int gabinet;
public:
    Lekarz(){}; // konstruktor domyślny
    Lekarz(string imie, string nazwisko, string specjalizacja, int ID_lekarza, int gabinet);
    void wyswietl();
};

#endif