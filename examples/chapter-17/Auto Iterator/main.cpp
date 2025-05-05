#include <iostream>
#include <array>
#include <string>

using namespace std;

int main()
{
    const int SIZE = 4;
    array<string, SIZE> names = {"Jamie", "Ashley", "Doug", "Claire"};

    cout << "The names in the array are:\n";
    for (auto it = names.begin(); it != names.end(); ++it)
    {
        cout << *it << endl;
    }

    return 0;
}