#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    long offset;
    long numBytes;
    char ch;
    char again;

    fstream file("letters.txt", ios::in);

    file.seekg(0L, ios::end);
    numBytes = file.tellg();
    cout << "The file has " << numBytes << " bytes.\n";

    file.seekg(0L, ios::beg);

    do
    {
        cout << "Currently at position " << file.tellg() << endl;
        cout << "Enter an offset from the beginning of the file: ";
        cin >> offset;

        if (offset >= numBytes)
        {
            cout << "Cannot read past the end of the file.\n";
        }
        else
        {
            file.seekg(offset, ios::beg);
            file.get(ch);
            cout << "Character read: " << ch << endl;
        }

        cout << "Do you want to read another character? (Y/N): ";
        cin >> again;
    } while (again == 'Y' || again == 'y');

    file.close();

    return 0;
}