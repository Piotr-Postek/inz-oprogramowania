//
// Created by piotr on 23.05.2024.
//

#ifndef PACJENT_H
#define PACJENT_H

#include <string>
#include <vector>

using namespace std;

class Wizyta;

class Pacjent {
private:
    std::string imie;
    std::string nazwisko;
    unsigned long long PESEL;
    vector<Wizyta*> wizyty;

public:
    Pacjent(std::string imie, std::string nazwisko, unsigned long long PESEL);
    int umowWizyte(Wizyta* wizyta);
    void odwolajWizyte(Wizyta* wizyta);
    void sprawdzWizyte();
    void modyfikujDane();
    void wyswietlDane();
    string getNazwisko() const { return nazwisko; }
    string getImie() const { return imie; }
};

#endif // PACJENT_H
