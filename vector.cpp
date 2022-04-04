#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> v1;

    // Dodawanie elementów do wektora
    for (int i = 1; i <= 18; i++)
    {
        v1.push_back(i);
    }

    // Wyświetlanie wektora
    for (auto i = v1.begin(); i != v1.end(); i++)
    {
        cout << *i << " ";
    }

    return 0;
}