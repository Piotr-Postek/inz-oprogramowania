#include <iostream>
#include "panelLekarza.h"
#include "Recepcjonistka.h"

#include "Lekarz.h"
#include "Wizyta.h"

using namespace std;

void panelLekarza() {
// zmiennel lokalne
    int wybor = 0, lWybor = 0, tWybor = 0, id = 0;
    bool processing = true;

    cout << "Panel Lekarza" << endl;
    cout << "Podaj ID aby sie zalogowac: ";
// Pętla programu
for(int i = 0; i < 3; i++) {
    cin >> id;
    // weryfikacja czy istnieje lekarz o podanym id
    Lekarz* lekarz = recepcjonistka.znajdzLekarza(id);
    if(lekarz != nullptr) {
        i = 3;  // Jeżeli istnieje to pętla wykona się jedynie raz


        while(processing) {
            // menu pacjenta
            cout << "1. Wyswietl wizyty" << endl;
            cout << "2. Rozpocznij wizyte" << endl;
            cout << "3. Wystaw recepty" << endl;
            cout << "4. Wystaw skierowania" << endl;
            cout << "5. Odwolaj wizyte" << endl;
            cout << "6. Wyloguj" << endl;

            cout << "Wybierz opcje: ";
            cin >> wybor;
            switch(wybor) {
                case 1:
                    // Wyswietl wizyty;
                        lekarz->wystwietlWizyty();
                        break;
                case 2: {
                    int wWybor = 0, i = 0;
                    // Zakończ wizyte
                    cout << "wybierz wizyte: (IDwizyty)" << endl;
                    lekarz->wystwietlWizyty();
                    cin >> wWybor;
                    for(auto& wizyta: lekarz->getWizyta()) {
                        if(i == wWybor-1) {
                            int koszt;
                            wizyta->changeStatus('Z');
                            cout << "Podaj koszt wizyty: ";
                            cin >> koszt;
                            wizyta->wystawRachunek(koszt);
                            lekarz->usunWizyte(wWybor);
                            break;
                        }
                    }
                    cout << "Wizyta zostala zakonczona" << endl;
                        break;
                }
                case 3: {
                    // Wystaw recepte
                    int wWybor = 0, i = 0;
                    cout << "wybierz wizyte: (IDwizyty)" << endl;
                    lekarz->wystwietlWizyty();
                    cin >> wWybor;
                    for(auto& wizyta: lekarz->getWizyta()) {
                        if(i == wWybor-1) {
                            wizyta->wystawRecepte();
                            break;
                        }
                    }
                        break;
                }
                case 4: {
                    // wystaw skierowanie
                    int sWybor = 0, i = 0;
                    cout << "wybierz wizyte: (IDwizyty)" << endl;
                    lekarz->wystwietlWizyty();
                    cin >> sWybor;
                    for(auto& wizyta: lekarz->getWizyta()) {
                        if(i == sWybor-1) {
                            cout << "Podaj badanie: ";
                            string badanie;
                            cin >> badanie;
                            wizyta->wystawSkierowanie(badanie);
                            break;
                        }
                    }
                    break;
                }
                case 5: {
                    // Odwolaj wizyte
                    cout << "Wybierz wizyte ";
                    lekarz->wystwietlWizyty();
                    int sWybor = 0;
                    cin >> sWybor;
                    for(auto& wizyta: lekarz->getWizyta()) {
                        if(i == sWybor-1) {
                            wizyta->changeStatus('X');
                            break;
                        }
                    }
                    lekarz->usunWizyte(sWybor);
                    cout << "Wizyta zostala odwolana" << endl;
                    break;
                }
                case 6: {
                    // zakoncz program
                    processing = false;
                    break;
                }
                default:
                    cout << "Niepoprawna opcja" << endl;
            }
        }
    }
    else if(i == 2){
        cout << "Nie udało sie zalogowac. Powrót do menu głownego" << endl;
        break;
    }
    else {
        cout << "Nie znaleziono pacjenta o podanym peselu. Sprobuj ponownie" << endl;
    }
}
}