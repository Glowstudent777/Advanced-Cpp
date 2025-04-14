/*****
 * Author: Glowstudent
 * Program: Day of the Year
 *****/

#include <iostream>
#include <limits>
#include "DayOfYear.h"

using namespace std;

int main()
{
    int n;

    cout << "Enter a day of the year (1-365): ";
    cin >> n;

    while (n < 1 || n > 365 || cin.fail())
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input. Please enter a number between 1 and 365: ";
        cin >> n;
    }
    DayOfYear day(n);

    cout << "\n\nThe date is: ";
    day.print();

    return 0;
}