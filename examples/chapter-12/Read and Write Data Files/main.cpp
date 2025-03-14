#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    const int SIZE = 4;
    char data[SIZE] = {'A', 'B', 'C', 'D'};
    fstream file;

    file.open("data.dat", ios::out | ios::binary);

    cout << "Writing data to the file..." << endl;
    file.write(data, sizeof(data));

    file.close();

    file.open("data.dat", ios::in | ios::binary);

    cout << "Reading data from the file..." << endl;
    file.read(data, sizeof(data));

    for (int i = 0; i < SIZE; i++)
    {
        cout << data[i] << " ";
    }

    file.close();

    return 0;
}