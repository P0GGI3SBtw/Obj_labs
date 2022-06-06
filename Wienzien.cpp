#include "Wienzien.h"

using namespace std;

Wienzien::Wienzien():Obywatel(), nr_celi("brak")
{
    cout << "Wienzien, konstruktor domyslny" << endl;
}

string Wienzien::daj_glos()
{
    return Obywatel::daj_glos() + " nr. celi= " + nr_celi;
}

string Wienzien::jedz()
{
    return "Je czesto";
}
