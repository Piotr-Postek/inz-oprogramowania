#ifndef PACJENT_H
#define PACJENT_H

#include <string>
#include <vector>

using namespace std;

class Wizyta;

class Pacjent {
private:
    string imie;
    string nazwisko;
    unsigned long long PESEL;
    vector<Wizyta *> wizyty;

public:
    Pacjent() {
    }; //konstruktor domyslny
    Pacjent(string imie, string nazwisko, unsigned long long PESEL); //konstruktor
    int umowWizyte(Wizyta *wizyta); //umawia wizyte
    void odwolajWizyte(int pozycja); //odwoluje wizyte
    void sprawdzWizyte() const; //sprawdza wizyte
    void sprawdzRecepte(); //sprawdza recepte
    void sprawdzSkierowanie(); //sprawdza skierowanie
    void modyfikujDane(); //modyfikuje dane pacjenta
    void wyswietlDane(); //wyswietla dane pacjenta
    string getNazwisko() const { return nazwisko; } //zwraca nazwisko pacjenta
    string getImie() const { return imie; } //zwraca imie pacjenta
    unsigned long long getPESEL() const { return PESEL; } //zwraca PESEL pacjenta
};

extern Pacjent pacjent;

#endif
