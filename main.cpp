#include <iostream>
#include <vector>

#include "src/Zwierze.h"
#include "src/Lekarz.h"
#include "src/Recepcjonistka.h"
#include "src/Termin.h"
#include "src/KartaZwierzecia.h"
#include "src/WizytaManager.h"
#include "panel/panelPacjenta.h"
#include "panel/panelLekarza.h"
#include "panel/panelRecepcjonistki.h"



using namespace std;


int main() {

    // Stworzenie wektora terminow
    vector<Termin> terminArray = {
        Termin("2024-05-28 12:00"),
        Termin("2024-06-15 11:00"),
        Termin("2024-06-15 12:00"),
        Termin("2024-06-15 13:00"),
        Termin("2024-06-15 14:00"),
        Termin("2024-06-15 15:00"),
        Termin("2024-06-15 16:00"),
        Termin("2024-06-15 17:00"),
        Termin("2024-06-15 18:00")
    };

    // stworzenie wektora pacjetow
    vector<Zwierze> pacjentArray{
            Zwierze("Jan Kowalski", 1234, 1234),
            Zwierze("Anna Kowalski", 1235, 1235)
    };
    // dodanie pacjentow do tablicy wektorow recepcjonistki
    for (auto &p: pacjentArray) {
        recepcjonistka.dodajPacjenta(&p);
    }
    // stworzenie wektora lekarzy
    vector<Lekarz> lekarzArray{
        Lekarz("Anna", "Nowak", "Weterynarz psi", 1, 101),
        Lekarz("Jan", "Kowalski", "Inseminator", 2, 102),
        Lekarz("Joanna", "Kowalska", "Weterynarz zwierzat chodowlanych", 3, 103)
    };
    // dodanie lekarzy do tablicy wektorow recepcjonistki
    for (auto &l: lekarzArray) {
        recepcjonistka.dodajLekarza(&l);
    }

    // dodanie terminow do lekarzy
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            lekarzArray[i - 1].dodajTermin(terminArray[(j * 3) - 1]);
        }
    }
    // dodanie karty pacjenta
    KartaZwierzecia *kartaPacjenta = new KartaZwierzecia(&pacjentArray[1], "1990-01-01", "Biegunka", 123456789);



//    WizytaManager::getInstance().dodajWizyte(w1);
//    WizytaManager::getInstance().dodajWizyte(w2);




    // zmienne lokalne programu
    bool pendingProgram = true;
    int wybor = 0;

    // pętla główna programu
    while (pendingProgram) {
        cout << "Wybierz panel: " << endl;
        cout << "1. Zwierze" << endl;
        cout << "2. Lekarz" << endl;
        cout << "3. Recepcjonistka" << endl;
        cout << "4. Wyjscie" << endl;
        cin >> wybor;

        switch (wybor) {
            case 1:
                panelPacjenta();
                break;
            case 2:
                panelLekarza();
                break;
            case 3:
                panelRecepcjonistki();
                break;
            case 4:
                pendingProgram = false;
                break;
            default:
                cout << "Niepoprawna opcja" << endl;
                break;
        }
    }

    return 0;
}
