#include <iostream>
#include "Wektor.h"

using namespace std;

Wektor::Wektor():x(0), y(0)
{

}

Wektor::Wektor(double ax, double ay):x(ax), y(ay)
{

}

auto Wektor::pokaz() -> void
{
    cout << "<" << x << ", " << y << ">" << endl;
}
