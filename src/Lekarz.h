//
// Created by piotr on 23.05.2024.
//

#ifndef LEKARZ_H
#define LEKARZ_H

#include <string>

using namespace std;

class Lekarz {
private:
    std::string imie;
    std::string nazwisko;
    std::string specjalizacja;
    int IDLekarza;
    int gabinet;

public:
    Lekarz(std::string imie, std::string nazwisko, std::string specjalizacja, int IDLekarza, int gabinet);
    void wyswietlDane() const;
    string getImie() const { return imie; }
    string getNazwisko() const { return nazwisko; }
    string getSpecjalizacja() const { return specjalizacja; }

};

#endif // LEKARZ_H
