#ifndef WIZYTA_H
#define WIZYTA_H

#include "Lekarz.h"
#include "Pacjent.h"
#include "Termin.h"

class Recepta;
class Skierowanie;

using namespace std;

class Wizyta {
private:
    Termin termin;
    Lekarz *lekarz;
    char status;
    int koszt;
    vector<Recepta *> recepty; //vector wskaznikow do obiektow klasy Recepta
    vector<Skierowanie *> skierowania; //vector wskaznikow do obiektow klasy Skierowanie

public:
    Wizyta(Termin termin, Lekarz *lekarz, char status, int koszt); //konstruktor

    void wystawRecepte(); //wystawia recepte

    void wystawSkierowanie(); //wystawia skierowanie

    void wystawRachunek(); //wystawia rachunek

    void pokazWizyte() const; //wyswietla wizyte

    void pokazRecepty() const; //wyswietla recepty

    void pokazSkierowania() const; //wyswietla skierowania

    int getKoszt() const { return koszt; } //zwraca koszt wizyty
    string getTerminWizyty() const { return termin.getTermin(); } //zwraca termin wizyty
    Lekarz *getLekarzWizyty() const { return lekarz; } //zwraca lekarza wizyty
};

#endif
