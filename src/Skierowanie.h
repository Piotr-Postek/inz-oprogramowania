//
// Created by piotr on 23.05.2024.
//

#ifndef SKIEROWANIE_H
#define SKIEROWANIE_H

#include <string>
#include "Lekarz.h"
#include "Pacjent.h"

class Skierowanie {
private:
    Wizyta* wizyta;
    std::string badanie;

public:
    Skierowanie(Lekarz* lekarz, Pacjent* pacjent, std::string badanie);
    void wyswietlSkierowanie();
};

#endif // SKIEROWANIE_H
