#include <vector>
#include <iostream>
#include <string>
#include "pies.h"
#include "pies.cpp"

using namespace std;
//
//void drukuj(Pies p)
//{
//    cout << "druk psa " << p.imie << endl;
//}

void drukuj(Pies* p)
{
    cout << "druk adresu psa wskaznikowego " << p->imie << endl;
}

void drukuj(Pies& p)
{
    cout << "druk adresu psa referencyjnego " << p.imie << endl;
}

int main(int argc, char **argv)
{
    Pies pies;
    pies.daj_glos();
    Pies *psy3 = new Pies("123124", 5);
    psy3->daj_glos();
    //drukuj(pies);
    //drukuj(*psy3);
    cout << "klon psa" << endl;
    Pies klon_psa(*psy3);
    klon_psa.daj_glos();

    // konstruktor kopiujący nie jest potrzebny, mozna zrobic nastepujaco, 
    // O ILE nie ma wskaźników jako field klasy! bo przekopiuje te same wskazniki do nowego obiektu i będą sharowane fieldy.
    // więc gdy są wskaźniki, tworzymy konstruktor kopiujący
    // pole wskaznikowe w klasie a nie napisze sie konstruktora kopiującego, pojawi się problem
    Pies klon_psa2 = *psy3;
    //klon_psa2.daj_glos();
    //cout << "przez wartosc" << endl;
    //drukuj(klon_psa2); // kopiuje sie obiekt, na stosie sie tworzy w funkcji obiekt pies z konstruktorem kopiujacym.
    
    cout << "przez wskaznik" << endl;
    drukuj(&klon_psa2);
    
    cout << "przez referencje" << endl;
    drukuj(klon_psa);
    
    Pies p5(17);
    p5.daj_glos();
    
    Pies p6("Znany");
    p6.daj_glos();
    return 0;
}