#include <ctime>
#include <iostream>
#include <string>
#include <vector>

#include "helpers.h"

vector<string> pobierzDatyWizyt(){
    time_t czas = time(nullptr);
    tm* czasLocal = localtime(&czas);
    vector<string> t_arr;
    int i = 0;

    // czas aktualny

    int t_dzien = czasLocal->tm_mday;
    int t_miesiac = czasLocal->tm_mon + 1;
    int t_rok = czasLocal->tm_year + 1900;
    int t_godz = czasLocal->tm_hour + 2;
    int t_min = czasLocal->tm_min;
    
    if(t_dzien < 10)
        cout << "0" << t_dzien << ":";
    else
        cout << t_dzien << ":";
    if(t_miesiac < 10)
        cout << "0" << t_miesiac << ":";
    else
        cout << t_miesiac << ":";

    cout << t_rok << ", ";

    if(t_godz < 10)
        cout << "0" << t_godz<< ":";
    else
        cout << t_godz<< ":";
    if(t_min < 10)
        cout << "0" << t_min << endl;
    else
        cout << t_min << endl;

    // pętla for, która będzie tworzyć obiekty klasy Termin
    for (int godz = t_godz + 1; godz < 24; godz++) {
        // ustawienie godziny, minuty i sekundy na 0, aby uzyskać pełną godzinę
        int min = 0;
        int sec = 0;

        // tworzenie obiektu klasy Termin
        Termin termin(to_string(t_dzien) + "." + to_string(t_miesiac) + "." + to_string(t_rok) + " " +
                      (godz < 10 ? "0" : "") + to_string(godz) + ":" + (min < 10 ? "0" : "") + to_string(min) + ":" +
                      (sec < 10 ? "0" : "") + to_string(sec));

        // zapisanie obiektu do tablicy
        t_arr.push_back(termin.termin);

        // jeśli godzina wynosi 23, to należy zresetować dzień i zwiększyć miesiąc o 1
        if (godz == 23) {
            t_dzien = 1;
            t_miesiac++;

            // jeśli miesiąc wynosi 12, to należy zresetować miesiąc i zwiększyć rok o 1
            if (t_miesiac == 12) {
                t_miesiac = 1;
                t_rok++;
            }
        }

        // jeśli liczba utworzonych terminów wynosi 10, to należy zakończyć pętlę for
        if (i == 10) {
            break;
        }
    }

    

    // zwrócenie tablicy z terminami
    return t_arr;
}