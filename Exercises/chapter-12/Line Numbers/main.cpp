/*****
 * Author: Glowstudent
 * Program: Line Numbers
 *****/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string fileName;
    string line;
    fstream file;
    char more;
    int lineNum = 1;
    const int maxLines = 24;
    int curLine = 0;

    cout << "Enter the name of the file: ";
    cin >> fileName;
    cin.ignore();

    file.open(fileName, ios::in);

    if (file)
    {
        while (!file.eof())
        {
            getline(file, line);

            cout << lineNum << ": " << line << endl;
            lineNum++;
            curLine++;

            if (curLine == maxLines)
            {
                cout << "\nPress Enter to continue...";
                cin.get(more);
                curLine = 0;
            }
        }

        file.close();
    }
    else
    {
        cout << "Error opening file." << endl;
    }

    return 0;
}