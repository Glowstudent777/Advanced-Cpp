#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
    const int ROWS = 3;
    const int COLS = 3;
    int nums[ROWS][COLS] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    fstream outFile("table.txt", ios::out);

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            outFile << setw(5) << nums[i][j];
        }
        outFile << endl;
    }

    outFile.close();
    cout << "Data written to table.txt" << endl;

    return 0;
}