#include <iostream>
#include <limits>
#include <string>
#include "Month.h"

using namespace std;

int main()
{
    int n;
    Month nameMonth;

    cout << "Enter a month number (1-12): ";
    cin >> n;

    while (n < 1 || n > 12 || cin.fail())
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input. Please enter a number between 1 and 12: ";
        cin >> n;
    }
    Month numMonth(n);

    cin >> nameMonth;

    cout << endl;

    cout << "The first month as a string is: " << numMonth << endl;
    cout << "The second month as a number is: " << nameMonth.getMonthNumber() << endl;

    cout << "\nThe first month is on top and the second month is on bottom.\n\n";

    for (int i = 0; i < 3; i++)
    {
        cout << "Prefix increment #" << (i + 1) << ": " << ++numMonth << endl;
        cout << "Prefix decrement #" << (i + 1) << ": " << --nameMonth << endl;
    }

    cout << endl;

    for (int i = 0; i < 3; i++)
    {
        cout << "Postfix decrement #" << (i + 1) << ": " << numMonth-- << endl;
        cout << "Postfix increment #" << (i + 1) << ": " << nameMonth++ << endl;
    }

    return 0;
}