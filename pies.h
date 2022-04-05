#pragma once

#include <string>
#include <iostream>

using namespace std;

class Pies
{
public:
    // defaultowy konstruktor
    Pies();
    // konstruktor (merytoryczny)
    Pies(string imie, double waga);
    
    // konstruktor kopiujący
    Pies(const Pies &original);
    
    // jednoargumentowe konstruktory ZAWSZE beda explicit
    explicit Pies(string aimie); // nie uzyj niejawnie
    explicit Pies(int cos);
    
    void daj_glos();
    
    string imie;
private:
    double waga;
};