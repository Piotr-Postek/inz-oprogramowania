#include <iostream>
#include <string>
#include <vector>
using namespace std;

enum StatusWizyty{
    O = 'O', // odbyta
    N = 'N', // nieodbyta
    P = 'P' // planowana
};

// Deklaracje klas
class Pacjent;
class Wizyta;
class Recepta;
class Skierowanie;
class Lekarz;
class Recepcjonistka;
class KartaPacjenta;
class Termin;

class Pacjent{
private:
    string imie;
    string nazwisko;
    unsigned long long pesel;

public:
    Pacjent(){}; // konstruktor domyślny
    Pacjent(string imie, string nazwisko, unsigned long long pesel) {
        this->imie = imie;
        this->nazwisko = nazwisko;
        this->pesel = pesel;
    }
    void wyswietl(){
        cout << "Dane pacjenta: " << imie << " " << nazwisko << " " << pesel << endl;
    };
};

class KartaPacjenta : public Pacjent{
private:
    Pacjent pacjent;
    string data_urodzenia;
    string m_zamieszkania;
    string m_urodzenia;
    int nr_telefonu;
public:
    KartaPacjenta(Pacjent pacjent, string data_urodzenia, string m_zamieszkania, string m_urodzenia, int nr_telefonu)
: pacjent(pacjent), data_urodzenia(data_urodzenia), m_zamieszkania(m_zamieszkania), m_urodzenia(m_urodzenia), nr_telefonu(nr_telefonu) {
        this->data_urodzenia = data_urodzenia;
        this->m_zamieszkania = m_zamieszkania;
        this->m_urodzenia = m_urodzenia;
        this->nr_telefonu = nr_telefonu;
    };
    void wyswietl(){
        pacjent.wyswietl();
        cout << "Data urodzenia: " << data_urodzenia << endl;
        cout << "Miejsce zamieszkania: " << m_zamieszkania << endl;
        cout << "Miejsce urodzenia: " << m_urodzenia << endl;
        cout << "Numer telefonu: " << nr_telefonu << endl;
    };

};

class Lekarz {
private:
    string imie;
    string nazwisko;
    string specjalizacja;
    int ID_lekarza;
    int gabinet;
public:
    Lekarz(){}; // konstruktor domyślny
    Lekarz(string imie, string nazwisko, string specjalizacja, int ID_lekarza, int gabinet) {
        this->imie = imie;
        this->nazwisko = nazwisko;
        this->specjalizacja = specjalizacja;
        this->ID_lekarza = ID_lekarza;
        this->gabinet = gabinet;
    };
    void wyswietl(){
        cout << "Imie: " << imie << endl;
        cout << "Nazwisko: " << nazwisko << endl;
        cout << "Specjalizacja: " << specjalizacja << endl;
        cout << "ID lekarza: " << ID_lekarza << endl;
        cout << "Gabinet: " << gabinet << endl;
    };
};

class Wizyta{
private:
    string termin;
    Lekarz lekarz;
    Pacjent pacjent;
    StatusWizyty status_wizyty;
    int koszt;
public:
    Wizyta(){}; // konstruktor domyślny
    Wizyta(Pacjent pacjent, Lekarz lekarz, string termin, StatusWizyty status_wizyty, int koszt)
    :pacjent(pacjent), lekarz(lekarz)
    {
        this->termin = termin;
        this->status_wizyty = status_wizyty;
        this->koszt = koszt;

    };
    void wyswietl(){
        pacjent.wyswietl();
        lekarz.wyswietl();
        cout << "Termin: " << termin << endl;
        cout << "Status wizyty: " << status_wizyty << endl;
        cout << "Koszt: " << koszt << endl;
    };
};

class Recepta : public Wizyta{
private:
    Wizyta wizyta;
    string lek;
    int ilosc;
    string dawkowanie;
public:
    Recepta(){}; // konstruktor domyślny
    Recepta(Wizyta wizyta, string lek, int ilosc, string dawkowanie)
        :wizyta(wizyta)
 {
        this->lek = lek;
        this->ilosc = ilosc;
        this->dawkowanie = dawkowanie;
    };
    void wyswietl(){
        wizyta.wyswietl();
        cout << "Lek: " << lek << endl;
        cout << "Ilosc: " << ilosc << endl;
        cout << "Dawkowanie: " << dawkowanie << endl;
    };
};

class Skierowanie{
private:
    Wizyta wizyta;
    string badanie;
public:
    Skierowanie(){}; // konstruktor domyślny
    Skierowanie(Wizyta wizyta, string badanie)
        :wizyta(wizyta)
    {
        this->badanie = badanie;
    };
    void wyswietl(){
        wizyta.wyswietl();
        cout << "Badanie: " << badanie << endl;
    };
};


int main(){

    cout << "------------------------------" << endl;

    Pacjent pacjent1("JAN", "Kowalski", 12345678901);
    cout << "Pacjent: " << endl;
    pacjent1.wyswietl();
    cout << endl;
    cout << "------------------------------" << endl;

    KartaPacjenta karta1(pacjent1, "01.01.2000", "Warszawa", "Warszawa", 123456789);
    cout << "Karta pacjenta: " << endl;
    karta1.wyswietl();
    cout << endl;
    cout << "------------------------------" << endl;

    Lekarz lekarz1("Jan", "Nowak", "Kardiolog", 124891, 001);
    cout << "Lekarz: " << endl;
    lekarz1.wyswietl();
    cout << endl;
    cout << "------------------------------" << endl;

    Wizyta wizyta1(pacjent1, lekarz1, "01.01.2021", P, 100);
    cout << "Wizyta: " << endl;
    wizyta1.wyswietl();
    cout << endl;
    cout << "------------------------------" << endl;

    Recepta recepta1(wizyta1, "Apap", 2, "2x dziennie");
    cout << "Recepta: " << endl;
    recepta1.wyswietl();
    cout << endl;
    cout << "------------------------------" << endl;

    Skierowanie skierowanie1(wizyta1, "EKG");
    cout << "Skierowanie: " << endl;
    skierowanie1.wyswietl();
    cout << endl;
    cout << "------------------------------" << endl;




    return 0;
}