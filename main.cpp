#include <iostream>
#include <string>
#include "car.h"
#include "car.cpp"

using namespace std;

int main()
{
    Car car1;

    car1.wczytaj();
    car1.wypisz();
    
    Car tab_c[2][2];

    return 0;
}
