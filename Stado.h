#ifndef STADO_H
#define STADO_H

#pragma once

#include <iostream>
#include <string>
#include <vector>
#include "Kot.h"

using namespace std;

class Stado
{
public:
    void dodaj(int gdzie, const Kot &k);
    void dodaj_na_koncu(const Kot &k);
    void usun(int gdzie);
    void usun_na_koncu();

    // void sortuj(int flag);
    void pokaz();

private:
    vector <Kot> v;
};

#endif