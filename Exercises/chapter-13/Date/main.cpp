/*****
 * Author: Glowstudent
 * Program: Date Class
 *****/

#include <iostream>
#include "Date.h"
#include <limits>

using namespace std;

int main()
{
    Date today;
    int month, day, year, form;

    cout << "Enter today's month (1-12): ";
    cin >> month;

    while (month < 1 || month > 12 || cin.fail())
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "Invalid month. Please enter a valid month (1-12): ";
        cin >> month;
    }

    cout << "Enter today's day (1-31): ";
    cin >> day;

    while (day < 1 || day > 31 || cin.fail())
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "Invalid day. Please enter a valid day (1-31): ";
        cin >> day;
    }

    cout << "Enter today's year (YYYY): ";
    cin >> year;

    while (year < 0 || cin.fail())
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "Invalid year. Please enter a valid year (YYYY): ";
        cin >> year;
    }

    today.setDay(day);
    today.setMonth(month);
    today.setYear(year);

    cout << "Enter the display format (1 for SHORT, 2 for MEDIUM, 3 for MEDIUM ALTERNATE): ";
    cin >> form;

    while (form < 1 || form > 3 || cin.fail())
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "Invalid format. Please enter a valid format (1-3): ";
        cin >> form;
    }

    DisplayFormat displayFormat = static_cast<DisplayFormat>(form);
    cout << "Today's date is: ";
    today.displayDate(displayFormat);

    return 0;
}