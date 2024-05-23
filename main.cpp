#include <iostream>
#include <vector>

#include "Pacjent.h"
#include "KartaPacjenta.h"
#include "Wizyta.h"
#include "Lekarz.h"
#include "Recepcjonistka.h"
#include "Recepta.h"
#include "Skierowanie.h"
#include "Termin.h"

using namespace std;

void displayTerminArray(const vector<Termin>& terminArray) {
    for (const auto& termin : terminArray) {
        termin.display();
    }
}

int main() {

    // vector<Termin> terminArray = {Termin("2024-05-28 12:00"),
    //     Termin("2024-06-15 11:00"),
    //     Termin("2024-06-15 12:00"),
    //     Termin("2024-06-15 13:00"),
    //     Termin("2024-06-15 14:00"),
    //     Termin("2024-06-15 15:00"),
    //     Termin("2024-06-15 16:00"),
    //     Termin("2024-06-15 17:00"),
    //     Termin("2024-06-15 18:00")};
    //
    //
    // // Create instances of classes
    // Pacjent pacjent("Jan", "Kowalski", 12345678901);
    // // pacjent.wyswietlDane();
    // Pacjent pacjent2("Joanna", "Kowalska", 12345678901);
    // // pacjent2.wyswietlDane();
    // //
    // // pacjent2.modyfikujDane();
    // // pacjent2.wyswietlDane();
    //
    // // Lekarz lekarz("Anna", "Nowak", "Dermatolog", 1, 101);
    // // lekarz.wyswietlDane();
    //
    // Lekarz* lekarz = new Lekarz[] {
    //     Lekarz("Anna", "Nowak", "Dermatolog", 1, 101),
    //     Lekarz("Jan", "Kowalski", "Kardiolog", 2, 102),
    //     Lekarz("Joanna", "Kowalska", "Ortopeda", 3, 103)
    // };
    //
    // //create termin array
    //
    // // Wizyta wizyta(&terminArray[1], &lekarz, &pacjent, 'P', 200);
    // // Wizyta wizyta2(&terminArray[2], &lekarz, &pacjent, 'P', 200);
    // // Wizyta wizyta3(&terminArray[3], &lekarz, &pacjent, 'P', 200);
    //
    // Wizyta* wizyta = new Wizyta[]{
    //     Wizyta(&terminArray[1], &lekarz[0], &pacjent, 'P', 200),
    //     Wizyta(&terminArray[2], &lekarz[1], &pacjent2, 'P', 200),
    //     Wizyta(&terminArray[3], &lekarz[2], &pacjent, 'P', 400)
    // };
    //
    // // Create KartaPacjenta
    // KartaPacjenta kartaPacjenta(&pacjent, "1990-01-01", "Warsaw", "Warsaw", 123456789);
    //
    // // Check KartaPacjenta
    // // if (kartaPacjenta.sprawdzKarte()) {
    // //     cout << "Karta pacjenta jest poprawna.\n";
    // // }
    //
    // // Schedule a visit
    // // if (pacjent.umowWizyte(&wizyta) == 0) {
    // //     cout << "Wizyta została umówiona.\n";
    // // }
    //
    // for (int i = 0; i < 3; i++) {
    //     pacjent.umowWizyte(&wizyta[i]);
    // }
    // // Check visit
    // // pacjent.sprawdzWizyte();
    //
    // // pacjent.odwolajWizyte(&wizyta[1]);
    // //
    // // // Check visit
    // // pacjent.sprawdzWizyte();
    //
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
    // // std::cout << "Pacjent details:" << std::endl;
    // // pacjent.wyswietlDane();
    // //
    // // std::cout << "Lekarz details:" << std::endl;
    // // lekarz.wyswietlDane();
    //
    // // std::cout << "Wizyta details:" << std::endl;
    // // wizyta.pokazWizyte(&pacjent);
    //
    // // pacjent.sprawdzWizyte();
    //
    // // std::cout << "Termin array details:" << std::endl;
    // // displayTerminArray(terminArray);
    //
    // // Demonstrate wystawRecepte
    // // cout << "Wystawianie recepty dla Wizyta1:" << std::endl;
    // // wizyta[0].wystawRecepte();
    // wizyta[0].wystawSkierowanie();
    //
    // Recepcjonistka recepcjonistka;
    // recepcjonistka.dodajLekarza(&lekarz[1]);
    // recepcjonistka.dodajLekarza(&lekarz[2]);
    // recepcjonistka.dodajLekarza(&lekarz[0]);
    // recepcjonistka.wyswietlLekarzy();
    //
    // recepcjonistka.usunLekarza(&lekarz[1]);
    // recepcjonistka.wyswietlLekarzy();
    //
    // recepcjonistka.rozliczenieWizyty(&wizyta[0]);


    return 0;
}
