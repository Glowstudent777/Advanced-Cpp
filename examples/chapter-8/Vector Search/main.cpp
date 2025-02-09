#include <iostream>
#include <vector>
#include <string>
#include "searchAlgs.h"
#include "sortingAlgs.h"

using namespace std;

int main()
{
    string searchValue;
    int position;

    vector<string> names = {"Lopez", "Smith", "Pike", "Jones",
                            "Abernathy", "Hall", "Wilson", "Kimura",
                            "Alvarado", "Harrison", "Geddes", "Irvine"};

    selectionSort(names);

    cout << "Here are the sorted names:\n";
    for (auto element : names)
        cout << element << endl;
    cout << endl;

    cout << "Enter a name to search for: ";
    getline(cin, searchValue);
    position = binarySearch(names, searchValue);

    if (position != -1)
        cout << "That name is found at position " << position << endl;
    else
        cout << "That name is not found.\n";

    return 0;
}