#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string fileName;
    char ch;
    fstream file;

    cout << "Enter the name of the file: ";
    cin >> fileName;

    file.open(fileName, ios::in);

    if (file)
    {
        file.get(ch);

        while (file)
        {
            cout << ch;
            file.get(ch);
        }

        file.close();
    }
    else
    {
        cout << "Error opening file." << endl;
    }

    return 0;
}