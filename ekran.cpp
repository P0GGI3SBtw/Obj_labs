#include <vector>
#include <iostream>
#include <string>
#include "ekran.h"

using namespace std;

auto Ekran::wypelnij(char c) -> void
{
    string linia(Szer, c);
    for(int i = 0; i < Wys; i++)
    {
        tablica[i] = linia;
    }
}

auto Ekran::wyswietl() -> void
{
    for(int i = 0; i < Wys; i++)
    {
        cout << tablica[i] << endl;
    }
}