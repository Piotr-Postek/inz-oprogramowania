//
// Created by piotr on 23.05.2024.
//

#ifndef RECEPTA_H
#define RECEPTA_H

#include <string>
#include "Wizyta.h"

using namespace std;

class Recepta {
private:
    Wizyta* wizyta;
    string lek;
    int ilosc;
    string dawka;

public:
    Recepta(Wizyta* wizyta, string lek, int ilosc, string dawka);
    void wyswietlRecepte() const;
};

#endif // RECEPTA_H
