//
// Created by piotr on 23.05.2024.
//
#include <iostream>
#include <string>
#include <algorithm>

#include "Recepcjonistka.h"
#include "Lekarz.h"


void Recepcjonistka::dodajLekarza(Lekarz* lekarz) {
    lekarze.push_back(lekarz);
    std::cout << "Lekarz " << lekarz->getImie() << " " << lekarz->getNazwisko() << " został dodany.\n";
}

void Recepcjonistka::usunLekarza(Lekarz* lekarz) {
    auto it = std::find(lekarze.begin(), lekarze.end(), lekarz);
    if (it != lekarze.end()) {
        lekarze.erase(it);
        std::cout << "Lekarz " << lekarz->getImie() << " " << lekarz->getNazwisko() << " został usunięty.\n";
    } else {
        std::cout << "Lekarz nie został znaleziony.\n";
    }
}

void Recepcjonistka::rozliczenieWizyty(Wizyta* wizyta) {
    int koszt = wizyta->getKoszt();
    std::cout << "Rozliczenie wizyty: Koszt wizyty wynosi " << koszt << " PLN.\n";
}

void Recepcjonistka::wyswietlLekarzy() const {
    std::cout << "Lista lekarzy:\n";
    for (const auto& lekarz : lekarze) {
        std::cout << lekarz->getImie() << " " << lekarz->getNazwisko() << ", Specjalizacja: " << lekarz->getSpecjalizacja() << "\n";
    }
}
