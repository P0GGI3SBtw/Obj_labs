#include <iostream>
#include <string>
#include "Obywatel.cpp"
#include "Student.cpp"
#include "Wienzien.cpp"

using namespace std;

void drukuj(Obywatel& o)
{
    cout << "Drukowanie " << o.jedz() << endl;
    cout << "Drukowanie " << o.daj_glos() << endl;
}

int main()
{
    // Student s;
    // s.daj_glos();

    // cout << s.daj_glos() << endl;

    // cout << s.jedz() << endl;

    // Wienzien w;
    // w.daj_glos();

    // cout << w.daj_glos() << endl;

    // cout << w.jedz() << endl;

    // Student y;
    // Wienzien x;

    // drukuj(y);
    // drukuj(x);

    Student a;
    Wienzien b;

    Obywatel *adr[] = {&a, &b};

    for(int i = 0; i < 2; i++)
    {
        adr[i] ->daj_glos();
        adr[i] ->jedz();
    }

}