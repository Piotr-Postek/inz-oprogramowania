

#include <iostream>

using namespace std;

class Pacjent{
private:
    string imie;
    string nazwisko;
    long long pesel;
public:
    Pacjent(string imie, string nazwisko, long long pesel){
        this->imie = imie;
        this->nazwisko = nazwisko;
        this->pesel = pesel;
    }
    // ~Pacjent(){
    //     cout<<"Usunieto pacjenta: "<< this->imie <<endl;
    // }
    void wyswietl(){
        cout<<"Imie: "<<imie<<endl;
        cout<<"Nazwisko: "<<nazwisko<<endl;
        cout<<"Pesel: "<<pesel<<endl;
    }
};

class KartaPacjenta : public Pacjent{
private:
    Pacjent pacjent;
    string data_urodzenia;
    string m_zamieszkania;
    string m_urodzenia;
    int nr_telefonu;
public:
    KartaPacjenta(string imie, string nazwisko, long long pesel, string data_urodzenia, string m_zamieszkania, string m_urodzenia, int nr_telefonu) : Pacjent(imie, nazwisko, pesel){
        this->data_urodzenia = data_urodzenia;
        this->m_zamieszkania = m_zamieszkania;
        this->m_urodzenia = m_urodzenia;
        this->nr_telefonu = nr_telefonu;
    }
    // ~KartaPacjenta(){
    //     cout<<"Usunieto karte pacjenta: "<< this->pacjent.wyswietl() <<endl;
    // }
    void wyswietl(){
        pacjent.wyswietl();
        cout<<"Data urodzenia: "<<data_urodzenia<<endl;
        cout<<"Miejsce zamieszkania: "<<m_zamieszkania<<endl;
        cout<<"Miejsce urodzenia: "<<m_urodzenia<<endl;
        cout<<"Numer telefonu: "<<nr_telefonu<<endl;
    }

};

class Lekarz{
public:
    string imie;
    string nazwisko;
    string specjalizacja;
    int ID_lekarza;
    int gabinet;

    Lekarz(string imie, string nazwisko, string specjalizacja, int ID_lekarza, int gabinet){
        this->imie = imie;
        this->nazwisko = nazwisko;
        this->specjalizacja = specjalizacja;
        this->ID_lekarza = ID_lekarza;
        this->gabinet = gabinet;
    }
    void wyswietl(){
        cout<<"Imie: "<<imie<<endl;
        cout<<"Nazwisko: "<<nazwisko<<endl;
        cout<<"Specjalizacja: "<<specjalizacja<<endl;
        cout<<"ID lekarza: "<<ID_lekarza<<endl;
        cout<<"Gabinet: "<<gabinet<<endl;
    }
    // ~Lekarz(){
    //     cout<<"Usunieto lekarza: "<< this->imie <<endl;
    // }

};

class Wizyta : public Pacjent, public Lekarz{
private:
    string termin;
    Lekarz lekarz;
    Pacjent pacjent;
    char status_wizyty; // dzięki temu można zdefiniować tablice stanów, np enum
    int koszt;
public:
    Wizyta(string imie, string nazwisko, long pesel, string data_urodzenia, string m_zamieszkania, string m_urodzenia, int nr_telefonu, string imie_lekarza, string nazwisko_lekarza, string specjalizacja, int ID_lekarza, int gabinet, string termin, char status_wizyty, int koszt) : Pacjent(imie, nazwisko, pesel), Lekarz(imie_lekarza, nazwisko_lekarza, specjalizacja, ID_lekarza, gabinet){
        this->termin = termin;
        this->status_wizyty = status_wizyty;
        this->koszt = koszt;
    }
    // ~Wizyta(){
    // }
    void wystaw_rachunek(){
        cout<<"Wystawiono rachunek na kwote: "<<koszt<<endl;
    }
    void wystaw_recepte(){
        cout<<"Wystawiono recepte"<<endl;
    }
};

class Recepta : public Wizyta{
private:
    Wizyta wizyta;
    string lek;
    int ilosc;
    string dawkowanie;
public:
    Recepta(string imie, string nazwisko, long pesel, string data_urodzenia, string m_zamieszkania, string m_urodzenia, int nr_telefonu, string imie_lekarza, string nazwisko_lekarza, string specjalizacja, int ID_lekarza, int gabinet, string termin, char status_wizyty, int koszt, string lek, int ilosc, string dawkowanie) : Wizyta(imie, nazwisko, pesel, data_urodzenia, m_zamieszkania, m_urodzenia, nr_telefonu, imie_lekarza, nazwisko_lekarza, specjalizacja, ID_lekarza, gabinet, termin, status_wizyty, koszt){
        this->lek = lek;
        this->ilosc = ilosc;
        this->dawkowanie = dawkowanie;
    }
    // ~Recepta(){
    //     cout<<"Usunieto recepte: "<< this->wizyta.wyswietl() <<endl;
    // }
    void wyswietl(){
        wizyta.wyswietl();
        cout<<"Lek: "<<lek<<endl;
        cout<<"Ilosc: "<<ilosc<<endl;
        cout<<"Dawkowanie: "<<dawkowanie<<endl;
    }
};


int main(){

    Pacjent pacjent1("Jan", "Kowalski", 12345678901);
    pacjent1.wyswietl();

    KartaPacjenta karta1("Jan", "Kowalski", 12345678901, "01.01.1990", "Warszawa", "Warszawa", 123456789);
    karta1.wyswietl();

    Lekarz lekarz1("Jan", "Nowak", "Kardiolog", 1, 1);
    lekarz1.wyswietl();

    Wizyta wizyta1("Jan", "Kowalski", 12345678901, "01.01.1990", "Warszawa", "Warszawa", 123456789, "Jan", "Nowak", "Kardiolog", 1, 1, "01.01.2021", 'O', 100);
    wizyta1.wystaw_rachunek();
    wizyta1.wystaw_recepte();

    Recepta recepta1("Jan", "Kowalski", 12345678901, "01.01.1990", "Warszawa", "Warszawa", 123456789, "Jan", "Nowak", "Kardiolog", 1, 1, "01.01.2021", 'O', 100, "Apap", 10, "3x dziennie");
    recepta1.wyswietl();



    return 0;
}