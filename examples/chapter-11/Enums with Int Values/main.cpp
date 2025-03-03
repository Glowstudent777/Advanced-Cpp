#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    enum Water
    {
        FREEZING = 32,
        BOILING = 212
    };

    int waterTemp;

    cout << "Enter the current water temperature: ";
    cin >> waterTemp;

    if (waterTemp <= FREEZING)
    {
        cout << "The water is frozen." << endl;
    }
    else if (waterTemp >= BOILING)
    {
        cout << "The water is boiling." << endl;
    }
    else
    {
        cout << "The water is not frozen or boiling." << endl;
    }

    return 0;
}