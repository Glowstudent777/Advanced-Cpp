#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

bool openFileIn(fstream &file, string name);
void showContents(fstream &file);

int main()
{
    fstream dataFile;

    if (openFileIn(dataFile, "demofile.txt"))
    {
        cout << "File opened successfully.\n";
        cout << "Now reading data from the file.\n\n";
        showContents(dataFile);
        dataFile.close();
        cout << "\nDone.\n";
    }
    else
    {
        cout << "File open error!\n";
    }

    return 0;
}

bool openFileIn(fstream &file, string name)
{
    file.open(name, ios::in);
    if (file.fail())
        return false;
    else
        return true;
}

void showContents(fstream &file)
{
    string line;

    while (file >> line)
    {
        cout << line << endl;
    }
}