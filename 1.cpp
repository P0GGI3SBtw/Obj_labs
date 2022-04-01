#include <iostream>
#include <string>

using namespace std;

class Pies
{
    public:
        long double waga;
        auto daj_glos() -> void
        {
            cout << "Pies" << endl;
        }

    protected:

    private:
        string imie_ojca;
};

class Kot
{
    public:
        string imie;
        auto daj_glos() -> void
        {
            cout << "Kot " << imie << endl;
        }
        auto jedz() -> void;

    protected:

    private:
        int ile_zyc {9};
};

void Kot:: jedz()
{
    cout << imie << " je" << endl;
    cout << "Adres kota: "<< this << endl;
}

int main()
{
    Pies p1;

    cout << sizeof(p1) << endl;
    cout << p1.waga << endl;
    p1.daj_glos();

    Pies *adr = &p1;
    adr -> daj_glos();

    Kot Mru;
    Mru.imie = "Mruczek";
    // Kot *adr = new Kot;
    // adr -> imie = "Bury";
    // adr -> jedz();
    Mru.daj_glos();

    cout << &Mru << endl;

    return 0;
}