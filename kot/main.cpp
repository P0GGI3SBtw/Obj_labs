#include <stdio.h>
#include <iostream>
#include <string>
#include "Kot.cpp"

using namespace std;

int main(int argc, char **argv)
{
    Kot kot;
    Kot *adr = new Kot;
    delete adr;
    Kot stado[3];
    cout << "asdf" << endl;
    Kot *adr2 = new Kot[2];
    // ryzyko memory leaka gdy zapomni się wywołać destruktora
    delete[] adr2;
    
    return 0;
}
