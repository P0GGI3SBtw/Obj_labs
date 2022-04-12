#pragma once

#include <string>
#include "Ekran.h"

using namespace std;

class Ramka
{
    public:
        Ramka(int ax0, int ay0, int aszer, int awys, string atxt);
        void rysuj(Ekran &e);

    protected:

    private:
        int x0, y0, szer, wys;
        string txt;

};
