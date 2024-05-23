//
// Created by piotr on 23.05.2024.
//

#ifndef WIZYTA_H
#define WIZYTA_H

#include <string>
#include "Lekarz.h"
#include "Pacjent.h"
#include "Termin.h"

class Recepta;

using namespace std;

class Wizyta {
private:
    Termin* termin;
    Lekarz* lekarz;
    Pacjent* pacjent;
    char status;
    int koszt;
    vector<Recepta*> recepty;

public:
    Wizyta(Termin* termin, Lekarz* lekarz, Pacjent* pacjent, char status, int koszt);
    void wystawRecepte();
    void wystawSkierowanie();
    void wystawRachunek();
    void pokazWizyte() const;
    int getKoszt() const { return koszt; }
};

#endif // WIZYTA_H
