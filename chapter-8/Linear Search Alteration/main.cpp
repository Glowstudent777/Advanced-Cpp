/*****
 * Author: Glowstudent
 * Program: Linear Sort Alteration
 *****/

#include <iostream>
#include <string>
#include "searchAlgs.h"
#include <fstream>

using namespace std;

string getSearch();

int main()
{
    string s;
    int i = 0, position;
    ifstream inFile;
    char again;
    string searchValue;

    string names[1000];

    inFile.open("thousandNames.txt");

    if (inFile.fail())
    {
        cout << "File failed to open" << endl;
        return 1;
    }

    while (getline(inFile, s) && !inFile.eof() && inFile.good() && (s != "" && s != " ") && i < 1000)
    {
        names[i] = s;
        i++;
    }

    inFile.close();

    do
    {
        searchValue = getSearch();
        position = linearSearch(names, 1000, searchValue);

        if (position != -1)
            cout << "That name is found at position " << position << endl;
        else
            cout << "That name is not found.\n";

        cout << "Would you like to look up another name? (y/n) ";
        cin >> again;

        cin.ignore();
    } while (again == 'y' || again == 'Y');

    return 0;
}

string getSearch()
{
    string searchValue;

    cout << "Enter a name to search for: ";
    getline(cin, searchValue);

    return searchValue;
}
