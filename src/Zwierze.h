#ifndef ZWIERZE_H
#define ZWIERZE_H

#include <string>
#include <vector>


//#include "KartaZwierzecia.h"


using namespace std;

class Wizyta;

class Zwierze {
private:
    string imie;
    long numerID;
    unsigned long long PESEL;
    vector<Wizyta *> wizyty;
    //KartaZwierzecia *kartaPacjenta=nullptr;


public:
    Zwierze() {
    }; //konstruktor domyslny
    Zwierze(string imie, long numerID, unsigned long long PESEL); //konstruktor
    int umowWizyte(Wizyta *wizyta); //umawia wizyte
    void odwolajWizyte(int pozycja); //odwoluje wizyte
    void sprawdzWizyte() const; //sprawdza wizyte
    void sprawdzRecepte(); //sprawdza recepte
    void sprawdzSkierowanie(); //sprawdza skierowanie
    void modyfikujDane(); //modyfikuje dane pacjenta
    void wyswietlDane(); //wyswietla dane pacjenta
    long getID() const { return numerID; } //zwraca numerID pacjenta
    string getImie() const { return imie; } //zwraca imie pacjenta
    unsigned long long getPESEL() const { return PESEL; } //zwraca PESEL pacjenta

};

extern Zwierze zwierze;

#endif
