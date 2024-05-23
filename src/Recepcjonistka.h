//
// Created by piotr on 23.05.2024.
//
#ifndef RECEPCJONISTKA_H
#define RECEPCJONISTKA_H
#include "Lekarz.h"
#include "Wizyta.h"


class Recepcjonistka {
private:
    std::vector<Lekarz*> lekarze;
public:
    void dodajLekarza(Lekarz* lekarz);
    void usunLekarza(Lekarz* lekarz);
    void rozliczenieWizyty(Wizyta* wizyta);
    void wyswietlLekarzy() const;
};

#endif // RECEPCJONISTKA_H
