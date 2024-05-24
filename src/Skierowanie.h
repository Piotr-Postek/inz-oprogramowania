#ifndef SKIEROWANIE_H
#define SKIEROWANIE_H

#include <string>
#include "Lekarz.h"
#include "Pacjent.h"

class Skierowanie {
private:
    Wizyta *wizyta;
    string badanie;

public:
    Skierowanie(Lekarz *lekarz, string badanie); //konstruktor

    void wyswietlSkierowanie(); //wyswietla skierowanie
};

#endif
