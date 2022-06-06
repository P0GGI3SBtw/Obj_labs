#include "Student.h"

using namespace std;

Student::Student():Obywatel(), nr_indeksu("brak")
{
    cout << "Student, konstruktor domyslny" << endl;
}

string Student::daj_glos()
{
    return " nr. indexu= " + nr_indeksu;
}

string Student::jedz()
{
    return "Je rzadko";
}
