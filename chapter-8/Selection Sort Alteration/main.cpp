/*****
 * Author: Glowstudent
 * Program: Selection Sort Alteration
 *****/

#include <iostream>
#include <string>
#include "searchAlgs.h"
#include "sortingAlgs.h"
#include <fstream>

using namespace std;

const int SIZE = 10000;

int main()
{
    string s;
    ifstream inFile;
    int arr[SIZE], i = 0;

    inFile.open("tenThousandNumbers.txt");

    if (inFile.fail())
    {
        cout << "File failed to open" << endl;
        return 1;
    }

    while (getline(inFile, s) && !inFile.eof() && inFile.good() && (s != "" && s != " ") && i < SIZE)
    {
        arr[i] = stoi(s);
        i++;
    }

    inFile.close();

    selectionSort(arr, SIZE);

    cout << "First 10 numbers in sorted order: " << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << endl;
    }

    cout << endl;

    cout << "Last 10 numbers in sorted order: " << endl;
    for (int i = SIZE - 10; i < SIZE; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}