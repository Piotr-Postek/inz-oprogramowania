#ifndef TERMIN_H
#define TERMIN_H

#include <string>

using namespace std;

class Termin {
private:
    string termin;

public:
    Termin(string termin); //konstruktor

    string getTermin() const;   //zwraca termin

    void wyswietl() const;  //wyswietla termin


    friend ostream &operator<<(ostream &os, const Termin &termin);  //przeciazenie operatora <<
};

extern Termin termin;

#endif
