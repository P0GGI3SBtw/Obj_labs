#pragma once

#ifndef CAR_H
#define CAR_H
#include <iostream>
#include <string>

using namespace std;

class Car
{
public:
    Car (const Mysz &oryginal)

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
