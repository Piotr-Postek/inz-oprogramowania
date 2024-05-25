#include <iostream>
#include "Termin.h"

using namespace std;

Termin::Termin(string termin)
    : termin(termin) {
}

string Termin::getTermin() const {
    return termin;
}

void Termin::wyswietl() const {
    cout << "Termin: " << termin << endl;
}

ostream &operator<<(ostream &os, const Termin &termin) {
    os << termin.termin;
    return os;
}
