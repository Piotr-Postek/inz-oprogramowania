//
// Created by Piotr Postek on 12/04/2025.
//

#ifndef INZ_OPROGRAMOWANIA_ZWIERZE_TYP_H
#define INZ_OPROGRAMOWANIA_ZWIERZE_TYP_H

#include <iostream>
#include <vector>
#include <memory>
#include <string>

using namespace std;

// Interfejs dla typu zwierzęcia
class AnimalType {
public:
    virtual ~AnimalType() {}

    // Zwraca nazwę typu zwierzęcia (np. "Pies", "Kot")
    virtual std::string getName() const = 0;

    // Informacja, czy to zwierzę jest domowe
    virtual bool isDomestic() const = 0;

    // Wyświetla informacje o typie zwierzęcia
    virtual void printInfo() const {
        std::cout << "Typ zwierzęcia: " << getName()
                  << ", Domowe: " << (isDomestic() ? "Tak" : "Nie") << std::endl;
    }
};


#endif //INZ_OPROGRAMOWANIA_ZWIERZE_TYP_H
