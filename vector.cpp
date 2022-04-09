#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> v1;

    for (int i = 0; i < 18; i++)
    {
        v1.push_back(i);
    }

    for (int i: v1)
    {
        cout << i << ", ";
    }

    return 0;
}
