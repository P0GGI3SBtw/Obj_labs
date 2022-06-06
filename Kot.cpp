#include <iostream>
#include <string>
#include "Kot.h"

using namespace std;

Kot::Kot():imie("brak"), wiek(0)
{
    cout << "Kot, konstruktor bezargumentowy" << endl;
}

Kot::Kot(string kimie, int kwiek): imie(kimie), wiek(kwiek)
{
    cout << "Kot, konstruktor: imie, wiek" << endl;
}

Kot::Kot(const Kot& original)
{
    cout << "Kot, konstruktor, kopiujacy" << endl;
}

Kot& Kot::operator=(const Kot& r)
{
    cout << "Kot, operator przypisania" << endl;
    if (this != &r)
    {
        imie = r.imie;
        wiek = r.wiek;
    }
    return *this;
}

Kot::~Kot()
{
    cout << "Kot, destruktor" << endl;
}

string Kot::toString()
{
    string a = "Kot ";
    string b = " ma ";
    string c = " lat.";

    string finnaly_string = a.append(imie).append(b).append(to_string(wiek)).append(c);

    return finnaly_string;
}
