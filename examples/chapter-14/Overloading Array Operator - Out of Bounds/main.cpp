#include <iostream>
#include "IntArray.h"

using namespace std;

int main()
{
    const int SIZE = 10;
    IntArray table(SIZE);

    for (int i = 0; i < SIZE; i++)
        table[i] = i;

    for (int i = 0; i < SIZE; i++)
        cout << table[i] << " ";
    cout << endl;

    cout << "Attempting to access an out-of-bounds element." << endl;
    table[SIZE + 1] = 100;

    return 0;
}