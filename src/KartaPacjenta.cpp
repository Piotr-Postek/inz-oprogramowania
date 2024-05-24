#include <iostream>
#include "KartaPacjenta.h"

using namespace std;

KartaPacjenta::KartaPacjenta(Pacjent *pacjent, string data, string miejsceZam, string miejsceUrodz, int nrTel)
    : pacjent(pacjent), dataUrodzenia(data), miejsceZamieszkania(miejsceZam), miejsceUrodzenia(miejsceUrodz),
      numerTelefonu(nrTel) {
}

bool KartaPacjenta::sprawdzKarte() {
    if (this->pacjent == nullptr) {
        return false;
    }
    return true;
}

void KartaPacjenta::wyswietolKarte() {
    cout << "Karta pacjenta: " << endl;
    cout << this->pacjent << " " << this->dataUrodzenia << ", " << this->miejsceZamieszkania << ", " << this->
            miejsceUrodzenia << ", " << this->numerTelefonu << endl;
}
