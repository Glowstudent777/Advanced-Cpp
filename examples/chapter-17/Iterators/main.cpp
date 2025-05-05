#include <iostream>
#include <array>
#include <string>

using namespace std;

int main()
{
    const int SIZE = 3;
    array<string, SIZE> names = {"Sarah", "William", "Alfredo"};
    array<string, SIZE>::iterator it;

    cout << "The names in the array are:\n";
    for (it = names.begin(); it != names.end(); it++)
        cout << *it << endl;

    return 0;
}