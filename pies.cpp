#include "pies.h"

#include <iostream>
#include <string>

using namespace std;

// lub, zamiast :imie
// (w dziedziczeniu sie przyda)
// :Pies("Nieznany", 0)
Pies::Pies():imie("Nieznany"), waga(0)
{
    
}

Pies::Pies(string aimie, double awaga):imie(aimie), waga(awaga)
{
    /*this->imie = imie;
    this->waga = waga;*/
}

// konstruktor kopiujący
Pies::Pies(const Pies &original): imie(original.imie), waga(original.waga)
{
    cout << "\t wywolany konstruktor kopiujacy" << endl;
}

Pies::Pies(int acos): imie("Nieznany"), waga(acos)
{
    
}

Pies::Pies(string aimie): imie(aimie), waga(0)
{
    
}

void Pies::daj_glos()
{
    cout << "hau hau, imie: " << imie << ", waga = " << waga << endl;
}