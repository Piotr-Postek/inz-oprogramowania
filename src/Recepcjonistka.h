#ifndef RECEPCJONISTKA_H
#define RECEPCJONISTKA_H
#include "Lekarz.h"
#include "Wizyta.h"


class Recepcjonistka {
private:
    vector<Lekarz *> lekarze; // tablica lekarzy
    vector<Pacjent *> pacjenci; // tablica pacjentow
public:
    void dodajLekarza(Lekarz *lekarz); //dodaje lekarza do tablicy lekarzy
    void usunLekarza(Lekarz *lekarz); //usuwa lekarza z tablicy lekarzy
    void rozliczenieWizyty(Wizyta *wizyta); //rozlicza wizyte
    void wyswietlLekarzy() const; //wyswietla liste lekarzy
    void dodajPacjenta(Pacjent *pacjent); //dodaje pacjenta do tablicy pacjentow
    Pacjent *znajdzPacjenta(unsigned long long pesel); //znajduje pacjenta po peselu
    const vector<Lekarz *> &getLekarze() const; //zwraca tablice lekarzy
    void displayTerminyLekarzy() const; //wyswietla terminy lekarzy
};

extern Recepcjonistka recepcjonistka;
#endif
