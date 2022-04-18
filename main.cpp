#include <iostream>

#include "Ekran.h"
#include "Ekran.cpp"
#include "Ramka.h"
#include "Ramka.cpp"

using namespace std;

int main()
{
    Ekran e;
    e.wypelnij('.');

    Ramka r1(2, 3, 30, 10, "Spis Tresci");
    r1.rysuj(e);

    Ramka r2(2, 15, 30, 10, "Rozdzial 1");
    r2.rysuj(e);

    Ramka r3(2, 27, 30, 10, "Rozdzial 2");
    r3.rysuj(e);

    e.rysuj_text(1,1,"Zosia");

    e.wyswietl();

    return 0;
}
