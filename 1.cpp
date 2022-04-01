#include <iostream>
#include<vector>

using namespace std;

template <typename T> void show(vector<T> v);
int ile_liter_a_lub_A(string txt);
int *daj_adres(int value);

int main()
{
    vector <int> a;

    cout << a.size() << endl;

    vector <double> b(10, 3.14);

    cout << b.size() << endl;

    for (double d : b)
    {
        cout << d << endl;
    }

    show<double>(b);

    vector <string> names = {"Zosia", "Jurek", "Rysio"};

    show<string>(names);

    string txt;
    cout << "Napisz cos: ";
    cin >> txt;
    cout << "Napis " << txt << " zawiera " << ile_liter_a_lub_A(txt) << " liter a lub A" << endl;


    int x {7};

    cout << "Adres x = " << daj_adres(x) << endl;


    return 0;

}

template <typename T> void show(vector<T> v)
{
    cout << "[";
    for (T d: v)
    {
        cout << d << ", ";
    }
    cout << "]" << endl;
}

int ile_liter_a_lub_A(string txt)
{
    int sum = 0;

    for (char i: txt)
    {
        if (i == 'a' || i == 'A')
        {
            sum++;
        }
    }

    return sum;
}

int *daj_adres(int value)
{
    int *adres = &value;
    return adres;
}