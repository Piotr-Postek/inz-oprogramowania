

#include <iostream>
#include <string>

#include "src/helpers.h"
#include "src/Pacjent.h"
// #include "src/Lekarz.h"
#include "src/Wizyta.h"

using namespace std;



int main(){

    Pacjent pacjent1("JAN", "Kowalski", 12345678901);
    cout << "Pacjent: " << endl;
    pacjent1.wyswietl();
    cout << endl;

    KartaPacjenta karta1("JAN", "Kowalski", 1827634, "01.01.2000", "Warszawa", "Warszawa", 123456789);
    cout << "Karta pacjenta: " << endl;
    karta1.wyswietl();
    cout << endl;

    Lekarz lekarz1("Jan", "Nowak", "Kardiolog", 1, 1);
    cout << "Lekarz: " << endl;
    lekarz1.wyswietl();
    cout << endl;

    Wizyta wizyta1("Jan", "Kowalski", 12345678901, "01.01.2000", "Warszawa", "Warszawa", 123456789, "Jan", "Nowak", "Kardiolog", 1, 1, "01.01.2021", P, 100);
    cout << "Wizyta: " << endl;
    wizyta1.wyswietl();
    cout << endl;

    Recepta recepta1("Jan", "Kowalski", 12345678901, "01.01.2000", "Warszawa", "Warszawa", 123456789, "Jan", "Nowak", "Kardiolog", 1, 1, "01.01.2021", N, 100, "Apap", 2, "2x dziennie");
    cout << "Recepta: " << endl;
    recepta1.wyswietl();
    cout << endl;

    Skierowanie skierowanie1("Jan", "Kowalski", 12345678901, "01.01.2000", "Warszawa", "Warszawa", 123456789, "Jan", "Nowak", "Kardiolog", 1, 1, "01.01.2021", O, 100, "EKG");
    cout << "Skierowanie: " << endl;
    skierowanie1.wyswietl();
    cout << endl;




    return 0;
}