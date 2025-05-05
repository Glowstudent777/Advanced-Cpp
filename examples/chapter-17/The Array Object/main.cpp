#include <iostream>
#include <array>
#include <string>

using namespace std;

int main()
{
    const int SIZE = 4;
    array<string, SIZE> names = {"Jamie", "Ashley", "Doug", "Claire"};

    cout << "The names in the array are:\n";
    for (int i = 0; i < names.size(); i++)
        cout << names[i] << endl;

    return 0;
}