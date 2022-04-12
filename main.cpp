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
    /*
    e.rysuj_text(52,21,"Zosia");
    e.wyswietl();
    */
    Ramka r(2, 3, 30, 10, "Spis Tresci");
    r.rysuj(e);
    e.wyswietl();

    return 0;
}
