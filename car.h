#pragma once

#ifndef CAR_H
#define CAR_H
#include <iostream>
#include <string>

using namespace std;

class Car
{
public:
    // konstuktor, domyślne warości, zabiezpiecza przez pominięciem jakiejś wartości i wstawia domyślną
    Car(string = "brak", string = "brak", int = 0, int = 0);

    // destruktor, usuwanie zmiennych, w celu czyszczenia pamięci RAM
    ~Car();

    void wczytaj();
    void wypisz();

private:
    string marka;
    string model;
    int rocznik;
    int przebieg;

};

#endif