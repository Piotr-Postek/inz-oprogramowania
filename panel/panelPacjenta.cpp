#include <iostream>

#include "panelPacjenta.h"
#include "Recepcjonistka.h"
#include "Pacjent.h"
#include "Wizyta.h"

using namespace std;


void panelPacjenta() {
// zmiennel lokalne
    int wybor = 0, lWybor = 0, tWybor = 0;
    unsigned long long pesel;
    bool processing = true;

    cout << "Panel pacjenta" << endl;
    cout << "Podaj pesel aby się zalogować: ";
// Pętla programu
for(int i = 0; i < 3; i++) {
    cin >> pesel;
    // weryfikacja czy istnieje pacjent o podanym peselu
    Pacjent* pacjent = recepcjonistka.znajdzPacjenta(pesel);
    if(pacjent != nullptr) {
        i = 3;  // Jeżeli istnieje to pętla wykona się jedynie raz


        while(processing) {
            // menu pacjenta
            cout << "1. Wyswietl wizyty" << endl;
            cout << "2. Wyswietl recepty" << endl;
            cout << "3. Wyswietl skierowania" << endl;
            cout << "4. Wyswietl dane osobowe" << endl;
            cout << "5. Umow wizyte" << endl;
            cout << "6. Odwolaj wizyte" << endl;
            cout << "7. Wyloguj" << endl;

            cout << "Wybierz opcje: ";
            cin >> wybor;
            switch(wybor) {
                case 1:
                    // Wyswietl wizyty
                        pacjent->sprawdzWizyte();
                        break;
                case 2:
                    // Wyswietl recepty
                        pacjent->sprawdzRecepte();
                        break;
                case 3:
                    // Wyswietl skierowania
                        pacjent->sprawdzSkierowanie();
                        break;
                case 4:
                    // Wyswietl dane osobowe
                        pacjent->wyswietlDane();
                        break;
                case 5: {
                    // Umow wizyte
                    cout << "wybierz lekarza: (IDlekarza)" << endl;
                    recepcjonistka.wyswietlLekarzy();
                    cin >> lWybor;
                    Lekarz* wybranyLekarz = nullptr;      // inicializacja obiektu lekarz na pusty wskaznik
                    //wyswietlenie lekarzy i wybranie lekarza
                    for(auto& lekarz : recepcjonistka.getLekarze()) {
                        if(lekarz->getIDLekarza() == lWybor) {
                            wybranyLekarz = lekarz;
                            break;
                        }
                    }
                    if(wybranyLekarz == nullptr) {
                        cout << "Nie znaleziono lekarza o podanym ID" << endl;
                    }
                    // wyswietlenie terminow danego lekarza
                    cout << "Wybierz dostepny termin: " << endl;
                    wybranyLekarz->wyswietlTerminy();
                    cin >> tWybor;
                    vector<Termin> terminy = wybranyLekarz->getTerminy();
                    Termin wybranyTermin = terminy[tWybor-1];

                    // umowienie wizyty i usuniecie terminu z listy terminow lekarza
                    Wizyta* nowaWizyta = new Wizyta(wybranyTermin, wybranyLekarz, 'N', 0);
                    pacjent->umowWizyte(nowaWizyta);

                    wybranyLekarz->usunTermin(tWybor);

                    break;
                }
                case 6: {
                    // Odwolaj wizyte
                    cout << "Wybierz wizytę do usunięcia:\n";
                    pacjent->sprawdzWizyte();
                    int pozycja = 0;
                    cin >> pozycja;
                    pacjent->odwolajWizyte(pozycja);
                    break;
                }
                case 7:
                    // Wyloguj
                        processing = false;
                break;
                default:
                    cout << "Niepoprawna opcja" << endl;
            }
        }
    }
    else if(i == 2){
        cout << "Nie udało się zalogować. Powrót do menu głównego" << endl;
        break;
    }
    else {
        cout << "Nie znaleziono pacjenta o podanym peselu. Spróbuj ponownie" << endl;
    }
}
}