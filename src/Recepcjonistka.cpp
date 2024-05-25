#include <iostream>
#include <string>
#include <algorithm>

#include "Recepcjonistka.h"
#include "Lekarz.h"

Recepcjonistka recepcjonistka;

void Recepcjonistka::dodajLekarza(Lekarz *lekarz) {
    lekarze.push_back(lekarz);
    cout << "Lekarz " << lekarz->getImie() << " " << lekarz->getNazwisko() << " zostal dodany.\n";
}

void Recepcjonistka::usunLekarza(Lekarz *lekarz) {
    auto it = find(lekarze.begin(), lekarze.end(), lekarz);
    if (it != lekarze.end()) {
        lekarze.erase(it);
        cout << "Lekarz " << lekarz->getImie() << " " << lekarz->getNazwisko() << " zostal usuniety.\n";
    } else {
        cout << "Lekarz nie został znaleziony.\n";
    }
}

void Recepcjonistka::rozliczenieWizyty(Wizyta *wizyta) {
    int koszt = wizyta->getKoszt();
    cout << "Koszt wizyty wynosi " << koszt << " PLN.\n";
}

void Recepcjonistka::wyswietlLekarzy() const {
    cout << "Lista lekarzy:\n";
    for (const auto &lekarz: lekarze) {
        cout << lekarz->getImie() << " " << lekarz->getNazwisko() << ", Specjalizacja: " << lekarz->getSpecjalizacja()
                << "ID: " << lekarz->getIDLekarza() << "\n";
    }
}

Pacjent *Recepcjonistka::znajdzPacjenta(unsigned long long pesel) {
    for (const auto &pacjent: pacjenci) {
        if (pacjent->getPESEL() == pesel) {
            return pacjent;
        }
    }
    return nullptr;
}

Lekarz *Recepcjonistka::znajdzLekarza(int id) {
    for(const auto &lekarz : lekarze) {
        if(lekarz->getIDLekarza() == id) {
            return lekarz;
        }
    }
}


void Recepcjonistka::dodajPacjenta(Pacjent *pacjent) {
    pacjenci.push_back(pacjent);
    cout << "Pacjent " << pacjent->getImie() << " " << pacjent->getNazwisko() << " zostal dodany.\n";
}

const vector<Lekarz *> &Recepcjonistka::getLekarze() const {
    return lekarze;
}

void Recepcjonistka::displayTerminyLekarzy() const {
    for (const auto &lekarz: lekarze) {
        lekarz->wyswietlTerminy();
    }
}
