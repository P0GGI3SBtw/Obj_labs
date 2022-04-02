#include <iostream>
#include <string>
#include "ekran.cpp"

using namespace std;

int main(int argc, char **argv)
{
    Ekran ekran;
    char c = '*';
    ekran.wypelnij(c);
    ekran.wyswietl();
    return 0;
}