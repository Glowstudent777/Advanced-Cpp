#include <iostream>
#include "IntArray.h"

using namespace std;

int main()
{
    const int SIZE = 10;
    IntArray table(SIZE);

    for (int i = 0; i < SIZE; i++)
        table[i] = (i * 2);

    for (int i = 0; i < SIZE; i++)
        cout << table[i] << " ";
    cout << endl;

    for (int i = 0; i < SIZE; i++)
        table[i] = table[i] + 5;

    for (int i = 0; i < SIZE; i++)
        cout << table[i] << " ";
    cout << endl;

    for (int i = 0; i < SIZE; i++)
        table[i]++;

    for (int i = 0; i < SIZE; i++)
        cout << table[i] << " ";
    cout << endl;

    return 0;
}