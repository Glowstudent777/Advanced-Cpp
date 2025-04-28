#include <iostream>
#include "SimpleVector.h"

using namespace std;

int main()
{
    const int SIZE = 10;
    int count;

    SimpleVector<int> intTable(SIZE);
    SimpleVector<double> doubleTable(SIZE);

    for (count = 0; count < SIZE; count++)
    {
        intTable[count] = (count * 2);
        doubleTable[count] = (count * 2.14);
    }

    cout << "The integer vector contains:\n";
    for (count = 0; count < SIZE; count++)
        cout << intTable[count] << " ";
    cout << endl;

    cout << "The double vector contains:\n";
    for (count = 0; count < SIZE; count++)
        cout << doubleTable[count] << " ";
    cout << endl;

    cout << "\nAdding 5 to each element of the integer and double vectors.\n";
    for (count = 0; count < SIZE; count++)
    {
        intTable[count] += 5;
        doubleTable[count] += 5.0;
    }

    cout << "The integer vector contains:\n";
    for (count = 0; count < SIZE; count++)
        cout << intTable[count] << " ";
    cout << endl;

    cout << "The double vector contains:\n";
    for (count = 0; count < SIZE; count++)
        cout << doubleTable[count] << " ";
    cout << endl;

    cout << "\nIncrementing each element of the integer and double vectors by 1.\n";
    for (count = 0; count < SIZE; count++)
    {
        intTable[count]++;
        doubleTable[count]++;
    }

    cout << "The integer vector contains:\n";
    for (count = 0; count < SIZE; count++)
        cout << intTable[count] << " ";
    cout << endl;

    cout << "The double vector contains:\n";
    for (count = 0; count < SIZE; count++)
        cout << doubleTable[count] << " ";
    cout << endl;

    return 0;
}