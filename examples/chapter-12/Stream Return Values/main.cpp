#include <iostream>
#include <fstream>

using namespace std;

void showState(fstream &file);

int main()
{
    int num = 10;

    fstream testFile("stuff.dat", ios::out);
    if (testFile.fail())
    {
        cout << "Error opening file." << endl;
        return 1;
    }

    cout << "Writing the value " << num << " to the file.\n";
    testFile << num;

    showState(testFile);

    testFile.close();

    testFile.open("stuff.dat", ios::in);
    if (testFile.fail())
    {
        cout << "Error opening file." << endl;
        return 1;
    }

    cout << "Reading the value from the file.\n";
    testFile >> num;
    cout << "The value read from the file is " << num << endl;

    showState(testFile);

    cout << "Forcing a bad read operation.\n";
    testFile >> num;

    showState(testFile);

    testFile.close();

    return 0;
}

void showState(fstream &file)
{
    cout << "File Status:\n";
    cout << "\teof bit:\t" << file.eof() << endl;
    cout << "\tfail bit:\t" << file.fail() << endl;
    cout << "\tbad bit:\t" << file.bad() << endl;
    cout << "\tgood bit:\t" << file.good() << endl;
    file.clear();
}