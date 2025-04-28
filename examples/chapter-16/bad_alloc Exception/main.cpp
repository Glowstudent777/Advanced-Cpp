#include <iostream>
#include <new>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    double *ptr = nullptr;
    const int ELEMENTS_TO_ALLOCATE = 100'000;

    try
    {
        ptr = new double[ELEMENTS_TO_ALLOCATE];
    }
    catch (bad_alloc e)
    {
        cout << "Memory allocation failed: " << e.what() << endl;
        return 1;
    }

    cout << "Memory allocation succeeded." << endl;
    cout << "Allocation table:\n\n";
    cout << "Bytes\t\tKilobytes\tMegabytes" << endl;
    cout << "-----------------------------------------" << endl;
    cout << ELEMENTS_TO_ALLOCATE * sizeof(double) << "\t\t"
         << ELEMENTS_TO_ALLOCATE * sizeof(double) / 1024.0 << "\t\t"
         << ELEMENTS_TO_ALLOCATE * sizeof(double) / (1024.0 * 1024.0) << endl;
    cout << "-----------------------------------------" << endl;

    return 0;
}