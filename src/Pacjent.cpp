//
// Created by piotr on 23.05.2024.
//
#include <iostream>
#include "Pacjent.h"
#include "Wizyta.h"
#include <algorithm>

using namespace std;

Pacjent::Pacjent(std::string imie, std::string nazwisko, unsigned long long PESEL)
    : imie(imie), nazwisko(nazwisko), PESEL(PESEL) {}

void Pacjent::wyswietlDane() {
    cout << "Dane pacjenta: " << this->imie << " " << this->nazwisko << ", " << this->PESEL << endl;
}

int Pacjent::umowWizyte(Wizyta* wizyta) {
    wizyty.push_back(wizyta);
    return 0;
}

void Pacjent::odwolajWizyte(Wizyta* wizyta) {
    auto it = find(wizyty.begin(), wizyty.end(), wizyta);
    if (it != wizyty.end()) {
        wizyty.erase(it);
        cout << "Wizyta została odwołana.\n";
    } else {
        cout << "Wizyta nie została znaleziona.\n";
    }
}

void Pacjent::sprawdzWizyte() {
    cout << "Wizyty for Pacjent " << imie << " " << nazwisko << ":\n";
    for (const auto& wizyta : wizyty) {
        wizyta->pokazWizyte();
    }
}

void Pacjent::modyfikujDane() {
    std::string noweImie, noweNazwisko;
    long nowyPESEL;

    std::cout << "Podaj nowe imię: ";
    std::cin >> noweImie;
    std::cout << "Podaj nowe nazwisko: ";
    std::cin >> noweNazwisko;
    std::cout << "Podaj nowy PESEL: ";
    std::cin >> nowyPESEL;

    imie = noweImie;
    nazwisko = noweNazwisko;
    PESEL = nowyPESEL;

    std::cout << "Dane pacjenta zostały zmodyfikowane.\n";
}