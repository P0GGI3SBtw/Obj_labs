#include <iostream>
#include <string>

#include "Kot.cpp"
#include "Stado.cpp"

using namespace std;

int main()
{
    Kot* kot1 = new Kot();
    cout << kot1->toString() << endl;
    Kot* kot2 = new Kot("Mruczek", 12);
    cout << kot2->toString() << endl;

    delete kot1;
    delete kot2;

    return 0;
}