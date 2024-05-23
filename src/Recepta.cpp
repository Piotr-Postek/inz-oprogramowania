//
// Created by piotr on 23.05.2024.
//
#include <iostream>
#include "Recepta.h"

using namespace std;

Recepta::Recepta(Wizyta* wizyta, string lek, int ilosc, string dawka)
    : wizyta(wizyta), lek(lek), ilosc(ilosc), dawka(dawka) {}

void Recepta::wyswietlRecepte() const{
    cout << "recepta" << endl;
    cout << this->lek << ", " << this->ilosc << ", " << this->dawka << endl;
}
