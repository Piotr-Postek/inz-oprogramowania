//
// Created by piotr on 23.05.2024.
//
#include <iostream>
#include "Skierowanie.h"

using namespace std;

Skierowanie::Skierowanie(Lekarz* lekarz, Pacjent* pacjent, std::string badanie)
    : wizyta(nullptr), badanie(badanie) {}

void Skierowanie::wyswietlSkierowanie() {
    cout << "Skierowanie" << endl;
    cout << this->badanie << endl;
}