#include <iostream>

using namespace std;

int main()
{
    int x = 33; // zmienna liczbowa
    int *wsk = &x; // przypisanie wkaźnikowi adresu zmiennej x
    
    cout << *wsk << endl; // Wyłuskana warotść wskaźnika
    cout << wsk << endl; // adres zmiennej x
    cout << &wsk << endl; // adres wskaźnika
    cout << &x << endl; // adres zmiennej x


    return 0;
}