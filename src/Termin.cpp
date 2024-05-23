//
// Created by piotr on 23.05.2024.
//
#include <iostream>
#include "Termin.h"

using namespace std;

Termin::Termin(string termin)
    : termin(termin) {}

string Termin::getTermin() const {
    return termin;
}

void Termin::display() const {
    cout << "Termin: " << termin << endl;
}