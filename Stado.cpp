#include <iostream>
#include <string>
#include "Stado.h"
#include "Kot.h"

using namespace std;

void Stado::dodaj(int gdzie, const Kot &k)
{
    v.insert(v.begin()+gdzie, k);
}

void Stado::dodaj_na_koncu(const Kot &k)
{
    v.push_back(k);
}

void Stado::usun(int gdzie)
{
    v.erase(v.begin()+gdzie);
}

void Stado::usun_na_koncu()
{
    v.pop_back();
}

void Stado::sortuj(int typ_sortuj, int flag)
{
    switch (flag)
    {
    case sort_imie:
        break;
    case sort_anty_imie:
        break;
    case sort_wiek:
        break;
    case sort_anty_wiek:
        break;
    }
}