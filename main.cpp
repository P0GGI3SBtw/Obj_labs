#include <iostream>
#include "Wektor.cpp"
#include <vector>

using namespace std;

Wektor operator+(Wektor w1, Wektor w2)
{
    Wektor result_p(w1.x + w2.x, w1.y + w2.y);
    return result_p;
}

Wektor operator-(Wektor w1, Wektor w2)
{
    Wektor result_m(w1.x - w2.x, w1.y - w2.y);
    return result_m;
}

Wektor operator*(Wektor w1, Wektor w2)
{
    Wektor result_mult(w1.x * w2.x, w1.y * w2.y);
    return result_mult;
}

int main()
{
    int a = 5, b = 1;
    Wektor w1, w2(10, 20), w3, w4, *adr_w3 = new Wektor(1, 2), *adr_w5 = new Wektor(a, b);

    cout << "Wektor 1:" << endl;
    w1.pokaz();
    cout << "Wektor 2:" << endl;
    w2.pokaz();

    w3 = w2 + *adr_w3;
    w3.pokaz();

    w4 = w2 - *adr_w3;
    w4.pokaz();

    // Operator anonimowy mnożenie przez wektor
    (w2 * (*adr_w3)).pokaz();

    // Operator anonimowy mnozenie przez skalar
    // (w2 * (*adr_w5)).pokaz();

    return 0;
}