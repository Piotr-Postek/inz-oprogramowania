#include <iostream>
#include "Wizyta.h"
#include "Recepta.h"
#include "Skierowanie.h"
#include "Zwierze.h"

using namespace std;


Wizyta::Wizyta(Termin termin, Lekarz *lekarz, char status, int koszt)
        : termin(termin), lekarz(lekarz), status(status), koszt(koszt) {}

void Wizyta::wystawRecepte() {
    string lek;
    int ilosc;
    string dawka;

    cout << "Podaj nazwę leku: ";
    cin >> lek;
    cout << "Podaj ilość: ";
    cin >> ilosc;
    cout << "Podaj dawkę: ";
    cin >> dawka;

    Recepta *recepta = new Recepta(this, lek, ilosc, dawka);
    recepta->wyswietlRecepte();
    recepty.push_back(recepta);
}

void Wizyta::wystawSkierowanie(string badanie) {
    Skierowanie *skierowanie = new Skierowanie(lekarz, badanie);
    skierowanie->wyswietlSkierowanie();
    skierowania.push_back(skierowanie);
}

void Wizyta::wystawRachunek() {
    int koszt;
    cout << "Podaj koszt wizyty: ";
    cin >> koszt;
}

void Wizyta::pokazWizyte() const {
    cout << "Termin: " << termin
            << ", Lekarz: " << lekarz->getImie() << " " << lekarz->getNazwisko()
            << ", Status: " << status << ", Koszt: " << koszt << endl;
}

void Wizyta::pokazRecepty() const {
    for (const auto &recepta: recepty) {
        recepta->wyswietlRecepte();
    }
}

void Wizyta::pokazSkierowania() const {
    for (const auto &skierowanie: skierowania) {
        skierowanie->wyswietlSkierowanie();
    }
}

void Wizyta::zmienStatus(char statusWizyty) {
    status = statusWizyty;
}

void Wizyta::dodajRecepte(Recepta* recepta) {
    recepty.push_back(recepta);
    std::cout << "Recepta została dodana do wizyty.\n";
}

void Wizyta::changeStatus(char statusWizyty) {
    status = statusWizyty;
}

void Wizyta::wystawRachunek(int kosztWizyty) {
    koszt = kosztWizyty;
}

void Wizyta::setTermin(const Termin &termin) {
    Wizyta::termin = termin;
}

void Wizyta::setLekarz(Lekarz *lekarz) {
    Wizyta::lekarz = lekarz;
}

void Wizyta::setStatus(char status) {
    Wizyta::status = status;
}

void Wizyta::setKoszt(int koszt) {
    Wizyta::koszt = koszt;
}

void Wizyta::setRecepty(const vector<Recepta *> &recepty) {
    Wizyta::recepty = recepty;
}

void Wizyta::setSkierowania(const vector<Skierowanie *> &skierowania) {
    Wizyta::skierowania = skierowania;
}
