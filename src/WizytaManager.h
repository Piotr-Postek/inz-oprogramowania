//
// Created by Piotr Postek on 12/04/2025.
//

#ifndef WIZYTAMANAGER_H
#define WIZYTAMANAGER_H

#include <vector>
#include <iostream>
#include "Wizyta.h"

using namespace std;

class WizytaManager {
private:
    vector<Wizyta> wszystkieWizyty;

    // Prywatny konstruktor
    WizytaManager() {}

public:
    // Dostęp do instancji Singletona
    static WizytaManager& getInstance() {
        static WizytaManager instance;
        return instance;
    }

    // Zablokuj kopiowanie i przypisywanie
    WizytaManager(WizytaManager const&) = delete;
    void operator=(WizytaManager const&) = delete;

    // Dodawanie wizyty
    void dodajWizyte(const Wizyta& wizyta) {
        wszystkieWizyty.push_back(wizyta);
    }

    // Wyświetlenie wszystkich wizyt
    void wyswietlWszystkieWizyty() const {
        if (wszystkieWizyty.empty()) {
            cout << "Brak zapisanych wizyt." << endl;
            return;
        }

        for (size_t i = 0; i < wszystkieWizyty.size(); ++i) {
            cout << "Wizyta #" << i + 1 << ":" << endl;
            wszystkieWizyty[i].pokazWizyte();
            cout << endl;
        }
    }
};

#endif
