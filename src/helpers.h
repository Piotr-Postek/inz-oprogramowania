#ifndef HELPER_H
#define HELPER_H

using namespace std;

typedef enum{
    O = 'O', // odbyta
    N = 'N', // nieodbyta
    P = 'P' // planowana
} StatusWizyty;

class Termin{
public:
    string termin;

    Termin(string termin){ 
        this->termin;
    };
    void wypiszTerminy(Termin tablicaTerminow[], int rozmiarTablicy) {
    // pętla for, która iteruje przez tablicę
    for (int i = 0; i < rozmiarTablicy; i++) {
        // wyświetlenie terminu
        cout << "Termin " << i + 1 << ": " << tablicaTerminow[i].termin << endl;
    }
};
};


#endif