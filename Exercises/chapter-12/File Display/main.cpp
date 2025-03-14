/*****
 * Author: Glowstudent
 * Program: File Display
 *****/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string fileName;
    string line;
    char more;
    fstream file;
    int curLine = 0;
    const int maxLines = 24;

    cout << "Enter the name of the file: ";
    cin >> fileName;
    cin.ignore();

    file.open(fileName, ios::in);

    if (file)
    {
        while (!file.eof())
        {
            getline(file, line);

            cout << line << endl;

            if (curLine == maxLines)
            {
                cout << "\nPress Enter to continue...";
                cin.get(more);
                curLine = 0;
            }

            curLine++;
        }

        file.close();
    }
    else
    {
        cout << "Error opening file." << endl;
    }

    return 0;
}