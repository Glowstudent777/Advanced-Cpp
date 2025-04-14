#include <iostream>
#include "FeetInches.h"

using namespace std;

int main()
{
    int feet, inches;
    FeetInches first, second;

    cout << "Enter a distance in feet and inches: ";
    cin >> feet >> inches;
    first.setFeet(feet);
    first.setInches(inches);

    cout << "Enter another distance in feet and inches: ";
    cin >> feet >> inches;
    second.setFeet(feet);
    second.setInches(inches);

    if (first == second)
    {
        cout << "The two distances are equal." << endl;
    }
    else if (first > second)
    {
        cout << "The first distance is greater." << endl;
    }
    else
    {
        cout << "The second distance is greater." << endl;
    }

    return 0;
}