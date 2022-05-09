#include <iostream>
#include <string>
#include "Obywatel.h"

using namespace std;


Obywatel::Obywatel():nazwisko("nieznany"),imie("nieznany")
{
    cout << "wywolany konstruktor bezargumentowy" << endl;
}

Obywatel::Obywatel(string nazwisko)
{
    this->nazwisko = nazwisko;
    Obywatel::adr_dochody = new double[ILE_MIESIECY];
    for (int i = 0; i < ILE_MIESIECY; i++)
    {
        adr_dochody[i] = -1;
    }
    cout << "wywolany konstruktor z 1 argumentem" << endl;
}

Obywatel::Obywatel(string nazwisko, double *dochody):nazwisko(nazwisko)
{
    adr_dochody = new double[ILE_MIESIECY];
    for (int i = 0; i < ILE_MIESIECY; i++) {
        adr_dochody[i] = dochody[i];
    }
}

Obywatel::Obywatel(const Obywatel& orig):nazwisko(orig.nazwisko),imie(orig.imie)
{
    for (int i = 0; i < ILE_MIESIECY; i++) {
        adr_dochody[i] = orig.adr_dochody[i];
    }
}

Obywatel::~Obywatel()
{
    cout << "wywolany destruktor" << endl;
    delete[] adr_dochody;
}

auto Obywatel::pokaz() -> void
{
    double *adr = adr_dochody;
    cout << nazwisko << ": [";
    for (int i = 0; i < ILE_MIESIECY; i++)
    {
        cout << adr[i];
        if (i < ILE_MIESIECY - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;
}

// przez wartość, czyli kopia, ale nie ma konstruktora kopiującego
void Obywatel::drukuj(Obywatel o)
{
    cout << "drukowanie obywatela" << endl;

}