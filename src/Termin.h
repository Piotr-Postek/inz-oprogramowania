//
// Created by piotr on 23.05.2024.
//

#ifndef TERMIN_H
#define TERMIN_H

#include <string>

using namespace std;

class Termin {
private:
    string termin;

public:
    Termin(string termin);
    string getTermin() const;
    void display() const;
};

#endif // TERMIN_H
