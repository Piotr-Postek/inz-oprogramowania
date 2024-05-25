#ifndef LEKARZ_H
#define LEKARZ_H

#include <string>
#include <vector>
#include "Termin.h"
#include "Wizyta.h"

using namespace std;

class Wizyta;

class Lekarz {
private:
    string imie;
    string nazwisko;
    string specjalizacja;
    int IDLekarza;
    int gabinet;
    vector<Termin> terminy;
    vector<Wizyta*> wizyty;

public:
    Lekarz(string imie, string nazwisko, string specjalizacja, int IDLekarza, int gabinet); //konstruktor
    void wyswietlDane() const; //wyswietla dane lekarza
    void dodajTermin(Termin termin); //dodaje termin do wektora terminow
    void addWizyta(Wizyta* wizyta); //dodaje wizyte do wektora wizyt
    string getImie() const { return imie; } //zwraca imie lekarza
    string getNazwisko() const { return nazwisko; } //zwraca nazwisko lekarza
    string getSpecjalizacja() const { return specjalizacja; } //zwraca specjalizacje lekarza
    int getIDLekarza() const { return IDLekarza; } //zwraca ID lekarza
    const vector<Termin> &getTerminy() const { return terminy; } //zwraca wektor terminow
    void wyswietlTerminy() const; //wyswietla terminy lekarza
    void wystwietlWizyty() const; //wyswietla wizyty lekarza
    void usunTermin(int pos); //usuwa termin z wektora terminow
    void rocpocznijWizyte(Wizyta *wizyta); //rozpoczyna wizyte
    void usunWizyte(int id); //usuwa wizyte


};

extern Lekarz lekarz; //deklaracja obiektu lekarz

#endif
