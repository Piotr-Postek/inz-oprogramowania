#include <iostream>
#include "KartaZwierzecia.h"

using namespace std;

KartaZwierzecia::KartaZwierzecia(Zwierze *zwierze, string data, string choroby, int nrTel)
    : zwierze(zwierze), dataUrodzenia(data), choroby(choroby),
      numerTelefonu(nrTel) {
}

bool KartaZwierzecia::sprawdzKarte() {
    if (this->zwierze == nullptr) {
        return false;
    }
    return true;
}

void KartaZwierzecia::wyswietolKarte() {
    cout << "Karta zwierzecia: " << endl;
    cout << this->zwierze << " " << this->dataUrodzenia << ", " << this->
            choroby << ", " << this->numerTelefonu << endl;
}
