#pragma once

#include <iostream>
#include <string>

using namespace std;

constexpr int SZER=79;
constexpr int WYS=21;

class Ekran
{
    public:
        auto wypelnij(char)->void;
        auto wyswietl()->void;
        auto rysuj_text(int, int, string)->void;

    protected:

    private:
        string tab[WYS];
};
