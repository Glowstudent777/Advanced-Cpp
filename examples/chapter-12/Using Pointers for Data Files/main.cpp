#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    const int SIZE = 10;
    fstream file;
    int numbers[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    file.open("numbers.dat", ios::out | ios::binary);

    cout << "Writing data to the file..." << endl;
    file.write(reinterpret_cast<char *>(numbers), sizeof(numbers));

    file.close();

    file.open("numbers.dat", ios::in | ios::binary);

    cout << "Reading data from the file..." << endl;
    file.read(reinterpret_cast<char *>(numbers), sizeof(numbers));

    for (int i = 0; i < SIZE; i++)
    {
        cout << numbers[i] << " ";
    }

    file.close();

    return 0;
}