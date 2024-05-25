#include <iostream>

#include "panelRecepcjonistki.h"

#include "Lekarz.h"
#include "Recepcjonistka.h"
#include "Wizyta.h"

using namespace std;

void panelRecepcjonistki() {
    int wybor = 0;
    bool processing = true;

    cout << "Panel recepcjonistki" << endl;

    while(processing) {
        cout << "1. Wyswietl lekarzy " <<endl;
        cout << "2. Dodaj lekarza " <<endl;
        cout << "3. Usun lekarza " <<endl;
        cout << "4. Dodaj pacjenta " <<endl;
        cout << "5. Rozlicz wizyte " <<endl;
        cout << "6. Wyswietl terminy lekarzy" <<endl;
        cout << "7. Wyswietl pacjentow " <<endl;
        cout << "8. Wyloguj" <<endl;

        cout << "Wybierz opcje: ";
        cin>>wybor;
        switch(wybor) {
            case 1:
                //wyswietl lekarzy
                recepcjonistka.wyswietlLekarzy();
                break;


            case 2: {
                //dodaj lekarza
                string imie, nazwisko, specjalizacja;
                int id, gabinet;

                cout << "Podaj imie lekarza: ";
                cin >> imie;
                cout << "Podaj nazwisko lekarza: ";
                cin >> nazwisko;
                cout << "Podaj specjalizacje lekarza: ";
                cin >> specjalizacja;
                cout << "Podaj id lekarza: ";
                cin >> id;
                cout << "Podaj gabinet lekarza: ";
                cin >> gabinet;

                Lekarz newlekarz = Lekarz(imie, nazwisko, specjalizacja, id, gabinet);
                recepcjonistka.dodajLekarza(&newlekarz);

                break;
            }
            case 3: {
                //usun lekarza
                int id;
                recepcjonistka.wyswietlLekarzy();
                cout << "\nWybierz ID lekarza, ktorego chcesz usunac: ";
                cin >> id;
                Lekarz* deletelekarz = recepcjonistka.znajdzLekarza(id);
                recepcjonistka.usunLekarza(deletelekarz);
                break;
            }
            case 4: {
                //dodaj pacjenta
                string imie, nazwisko;
                unsigned long long pesel;

                cout << "Podaj imie pacjenta: ";
                cin >> imie;
                cout << "Podaj nazwisko pacjenta: ";
                cin >> nazwisko;
                cout << "Podaj PESEL pacjenta: ";
                cin >> pesel;

                Pacjent newpacjent = Pacjent(imie, nazwisko, pesel);
                recepcjonistka.dodajPacjenta(&newpacjent);
                break;
            }
            case 5: {
                //rozlicz wizyte
                int sWybor = 0, i = 0, koszt, id;
                recepcjonistka.wyswietlLekarzy();
                cout <<"Podaj lekarza: ";
                cin >> id;
                Lekarz* wizytalekarz = recepcjonistka.znajdzLekarza(id);
                cout << "wybierz wizyte: (IDwizyty)" << endl;
                wizytalekarz->wystwietlWizyty();
                cin >> sWybor;
                for(auto& wizyta: wizytalekarz->getWizyta()) {
                    if(i == sWybor-1) {
                        cout << "Podaj koszt: ";
                        cin >> koszt;
                        wizyta->wystawRachunek(koszt);
                        break;
                    }
                }
                break;
            }
            case 6: {

                recepcjonistka.displayTerminyLekarzy();
                break;
            }
            case 7:
                recepcjonistka.wyswietlPacjentow();
                break;
            case 8:

                processing=false;
                break;
        }

    }

}