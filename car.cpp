#include "car.h"

#include <iostream>
#include <string>

using namespace std;

void Car::wczytaj()
{
    cout << "Podaj marke samochodu: " << endl;
    cin >> marka;

    cout << "Podaj model samochodu: " << endl;
    cin >> model;

    cout << "Podaj rocznik samochodu: " << endl;
    cin >> rocznik;

    cout << "Podaj przebieg samochodu: " << endl;
    cin >> przebieg;
}

void Car::wypisz()
{
    cout << "Marka samochodu: " << marka << endl;
    cout << "Model samochodu: " << model << endl;
    cout << "Rocznik samochodu: " << rocznik << endl;
    cout << "Przebieg samochodu: " << przebieg << endl;
}

// konstruktor
Car::Car(string m, string md, int r, int p)
{
    marka = m;
    model = md;
    rocznik = r;
    przebieg = p;
}

// destruktor
Car::~Car()
{
    cout << "It's me destructor!" << endl;
}