#include <vector>
#include <iostream>

using namespace std;

// deklaracja
template <typename T> T suma(T a, T b, T);

int main(int argc, char **argv)
{
    int a = 5;
    int b = 6;
    int c = 2;
    cout << suma(a, b, c) << endl;
    return 0;
}

// definicja
template <typename T> T suma(T a, T b, T c) {
    return a + b + c;
}