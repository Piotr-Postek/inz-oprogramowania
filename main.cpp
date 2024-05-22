#include <iostream>
#include <string>
#include "Wizyta.h"
#include "helpers.h"
#include "Pacjent.h"


using namespace std;


int main(){

    cout << "------------------------------" << endl;

    Pacjent pacjent1("JAN", "Kowalski", 12345678901);
    cout << "Pacjent: " << endl;
    pacjent1.wyswietl();
    cout << endl;
    cout << "------------------------------" << endl;

    KartaPacjenta karta1(pacjent1, "01.01.2000", "Warszawa", "Warszawa", 123456789);
    cout << "Karta pacjenta: " << endl;
    karta1.wyswietl();
    cout << endl;
    cout << "------------------------------" << endl;

    Lekarz lekarz1("Jan", "Nowak", "Kardiolog", 124891, 001);
    cout << "Lekarz: " << endl;
    lekarz1.wyswietl();
    cout << endl;
    cout << "------------------------------" << endl;

    Wizyta wizyta1(pacjent1, lekarz1, "01.01.2021", P, 100);
    cout << "Wizyta: " << endl;
    wizyta1.wyswietl();
    cout << endl;
    cout << "------------------------------" << endl;

    Recepta recepta1(wizyta1, "Apap", 2, "2x dziennie");
    cout << "Recepta: " << endl;
    recepta1.wyswietl();
    cout << endl;
    cout << "------------------------------" << endl;

    Skierowanie skierowanie1(wizyta1, "EKG");
    cout << "Skierowanie: " << endl;
    skierowanie1.wyswietl();
    cout << endl;
    cout << "------------------------------" << endl;




    return 0;
}