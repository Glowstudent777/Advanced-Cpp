/*****
 * Author: Glowstudent
 * Program: Magic Dates
 *****/

#include <iostream>
#include <limits>

using namespace std;

int main()
{
    int month, day, year;

    cout << "This program will determine if a date is magic." << endl;
    cout << endl;
    cout << "Enter a month (in numeric form): ";
    cin >> month;

    while (month < 1 || month > 12 || cin.fail())
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid month. Please enter a month between 1 and 12: ";
        cin >> month;
    }

    cout << "Enter a day: ";
    cin >> day;

    while (day < 1 || day > 31 || cin.fail())
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid day. Please enter a day between 1 and 31: ";
        cin >> day;
    }

    cout << "Enter a two-digit year: ";
    cin >> year;

    while (year < 0 || year > 99 || cin.fail())
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid year. Please enter a two-digit year: ";
        cin >> year;
    }

    cout << "The date " << month << "/" << day << "/" << year << ((month * day == year) ? " is magic." : " is not magic.") << endl;

    return 0;
}