#ifndef KOT_H
#define KOT_H

#pragma once

#include <iostream>
#include <string>

using namespace std;

class Kot
{
public:
    Kot();

    Kot(string kimie, int kwiek);

    Kot(const Kot &original);

    Kot &operator=(const Kot &r);

    ~Kot();

    string toString();

    bool operator<(const Kot &inny);

    static sort_typ flag;

private:
    string imie;
    int wiek;
};

enum sort_type
{
    sort_imie, sort_anty_imie, sort_wiek, sort_anty_wiek;
}

#endif