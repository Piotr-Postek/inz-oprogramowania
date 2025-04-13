#ifndef WIZYTABUILDER_H
#define WIZYTABUILDER_H

#include "Wizyta.h"

class WizytaBuilder {
private:
    Termin termin;
    Lekarz* lekarz = nullptr;
    char status = 'N';
    int koszt = 0;
    vector<Recepta*> recepty;
    vector<Skierowanie*> skierowania;

public:

    WizytaBuilder() : termin("01.01.2000 00:00:00") {}

    WizytaBuilder& setTermin(const Termin& t) {
        this->termin = t;
        return *this;
    }

    WizytaBuilder& setLekarz(Lekarz* l) {
        this->lekarz = l;
        return *this;
    }

    WizytaBuilder& setStatus(char s) {
        this->status = s;
        return *this;
    }

    WizytaBuilder& setKoszt(int k) {
        this->koszt = k;
        return *this;
    }

    WizytaBuilder& addRecepte(Recepta* recepta) {
        this->recepty.push_back(recepta);
        return *this;
    }

    WizytaBuilder& addSkierowanie(Skierowanie* skierowanie) {
        this->skierowania.push_back(skierowanie);
        return *this;
    }

    Wizyta build() {
        Wizyta w(termin, lekarz, status, koszt);
        w.setRecepty(recepty);
        w.setSkierowania(skierowania);
        return w;
    }
};

#endif
