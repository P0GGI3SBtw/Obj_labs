#include <iostream>
#include <string>
#include "Kot.h"

using namespace std;


Kot::Kot():imie("nieznany")
{
    cout << "wywolany konstruktor bezargumentowy" << endl;
}

Kot::~Kot()
{
    cout << "wywolany destruktor" << endl;
}