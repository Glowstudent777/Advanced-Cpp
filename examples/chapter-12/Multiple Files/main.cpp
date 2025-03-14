#include <iostream>
#include <fstream>
#include <string>
#include "cctype"

using namespace std;

int main()
{
    string fileName;
    char ch;

    ifstream inFile;
    ofstream outFile("output.txt");

    cout << "Enter the name of the file to read: ";
    cin >> fileName;

    inFile.open(fileName);

    if (inFile)
    {
        inFile.get(ch);

        while (inFile)
        {
            outFile.put(toupper(ch));
            inFile.get(ch);
        }

        inFile.close();
        outFile.close();

        cout << "File conversion done." << endl;
    }
    else
    {
        cout << "Error opening file " << fileName << endl;
        return 1;
    }

    return 0;
}