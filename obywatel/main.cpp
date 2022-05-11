#include <stdio.h>
#include <iostream>
#include "Obywatel.cpp"

using namespace std;

int main(int argc, char **argv)
{
    // konstruktor merytoryczny, stringowy
    Obywatel obywatel{"Kowalski"};
    obywatel.pokaz();
    double dochody[] = {800, 1000, 700, 2100, 1900, 1400, 1000, 800, 200, 100, 0, 100};
    Obywatel obywatel2{"Malinowski", dochody};
    obywatel2.pokaz();
    obywatel2.drukuj(obywatel);
    return 0;
}
