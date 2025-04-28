#include <iostream>
#include "SearchableVector.h"

using namespace std;

int main()
{
    const int SIZE = 10;
    int count, result;

    SearchableVector<int> intTable(SIZE);
    SearchableVector<double> doubleTable(SIZE);

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

    cout << "\nSearching for 6 in the integer vector...\n";
    result = intTable.findItem(6);
    if (result == -1)
        cout << "6 was not found.\n";
    else
        cout << "6 was found at element " << result << endl;

    cout << "\nSearching for 12.84 in the double vector...\n";
    result = doubleTable.findItem(12.84);
    if (result == -1)
        cout << "12.84 was not found.\n";
    else
        cout << "12.84 was found at element " << result << endl;

    return 0;
}