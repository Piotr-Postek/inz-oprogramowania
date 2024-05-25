#include <iostream>
#include <vector>

#include "Pacjent.h"
#include "Lekarz.h"
#include "Recepcjonistka.h"
#include "Termin.h"
#include "KartaPacjenta.h"
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
    vector<Pacjent> pacjentArray{
        Pacjent("Jan", "Kowalski", 12),
        Pacjent("Joanna", "Kowalska", 34),
        Pacjent("Anna", "Nowak", 56),
        Pacjent("Pawel", "Martyniuk", 78)
    };
    // dodanie pacjentow do tablicy wektorow recepcjonistki
    for (auto &p: pacjentArray) {
        recepcjonistka.dodajPacjenta(&p);
    }
    // stworzenie wektora lekarzy
    vector<Lekarz> lekarzArray{
        Lekarz("Anna", "Nowak", "Dermatolog", 1, 101),
        Lekarz("Jan", "Kowalski", "Kardiolog", 2, 102),
        Lekarz("Joanna", "Kowalska", "Ortopeda", 3, 103)
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
    KartaPacjenta *kartaPacjenta = new KartaPacjenta[]{
        KartaPacjenta(&pacjentArray[1], "1990-01-01", "Warsaw", "Warsaw", 123456789)
    };

    // // Create Recepta
    // //Recepta recepta(&wizyta, "Paracetamol", 20, "500mg");
    //
    // for (int i = 0; i < 3; i++) {
    //     Recepta recepta(&wizyta[i], "Paracetamol", 20, "500mg");
    // }
    //
    //
    // // Create Skierowanie
    // Skierowanie skierowanie(&lekarz[2], &pacjent, "RTG klatki piersiowej");
    //
    // // // Recepcjonistka actions
    // // Recepcjonistka recepcjonistka;
    // // recepcjonistka.dodajLekarza();
    // // recepcjonistka.usunLekarza();
    // // recepcjonistka.rozliczenieWizyty();
    //
    // // Wizyta actions
    // // wizyta.wystawRecepte();
    // // wizyta.wystawSkierowanie();
    // // wizyta.wystawRachunek();
    // // wizyta.pokazWizyte(&pacjent);
    //
    // // Display all elements
    // // cout << "Pacjent details:" << endl;
    // // pacjent.wyswietlDane();
    // //
    // // cout << "Lekarz details:" << endl;
    // // lekarz.wyswietlDane();
    //
    // // cout << "Wizyta details:" << endl;
    // // wizyta.pokazWizyte(&pacjent);
    //
    // // pacjent.sprawdzWizyte();
    //
    // // cout << "Termin array details:" << endl;
    // // displayTerminArray(terminArray);
    //
    // // Demonstrate wystawRecepte
    // // cout << "Wystawianie recepty dla Wizyta1:" << endl;
    // // wizyta[0].wystawRecepte();
    // wizyta[0].wystawSkierowanie();
    //
    // recepcjonistka.wyswietlLekarzy();
    //
    // recepcjonistka.usunLekarza(&lekarz[1]);
    // recepcjonistka.wyswietlLekarzy();
    //
    // recepcjonistka.rozliczenieWizyty(&wizyta[0]);

    // zmienne lokalne programu
    bool pendingProgram = true;
    int wybor = 0;

    // pętla główna programu
    while (pendingProgram) {
        cout << "Wybierz panel: " << endl;
        cout << "1. Pacjent" << endl;
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
