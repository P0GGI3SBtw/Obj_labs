#pragma once

#ifndef OBYWATEL_H
#define OBYWATEL_H

#include <string>
#include <iostream>

using namespace std;

const int ILE_MIESIECY = 12;

class Obywatel
{
public:
    Obywatel();
    explicit Obywatel(string nazwisko);
    Obywatel(string nazwisko, double *dochody);
    // konstruktor kopiujacy
    Obywatel(const Obywatel& orig);
    ~Obywatel();
    auto pokaz() -> void;
    void drukuj(Obywatel o);
    
private:
    string nazwisko;
    string imie;
    double *adr_dochody;
    
protected:
    
};

#endif