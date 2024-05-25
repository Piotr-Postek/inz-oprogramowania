#include <iostream>
#include "Skierowanie.h"

using namespace std;

Skierowanie::Skierowanie(Lekarz *lekarz, string badanie)
    : wizyta(nullptr), badanie(badanie) {
}

void Skierowanie::wyswietlSkierowanie() {
    cout << "Skierowanie" << endl;
    cout << this->badanie << endl;
}
