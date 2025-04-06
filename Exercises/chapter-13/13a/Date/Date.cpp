#include "Date.h"
#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

string months[12] = {"January", "February", "March", "April", "May", "June",
                     "July", "August", "September", "October", "November", "December"};

Date::Date(int m, int d, int y)
{
    month = m;
    day = d;
    year = y;
}

void Date::setMonth(int m)
{
    if (m < 1 || m > 12 || isalpha(m))
    {
        cout << "Invalid month. Must be between 1 and 12" << endl;
        exit(EXIT_FAILURE);
    }
    else
        month = m;
}

void Date::setDay(int d)
{
    if (d < 1 || d > 31 || isalpha(d))
    {
        cout << "Invalid day. Must be between 1 and 31" << endl;
        exit(EXIT_FAILURE);
    }
    else
        day = d;
}

void Date::setYear(int y)
{
    if (y < 0 || isalpha(y))
    {
        cout << "Invalid year. Cannot be negative." << endl;
        exit(EXIT_FAILURE);
    }
    else
        year = y;
}

void Date::displayDate(DisplayFormat df) const
{
    switch (df)
    {
    case DisplayFormat::SHORT:
        cout << month << "/" << day << "/" << year;
        break;
    case DisplayFormat::MEDIUM:
        cout << months[month - 1] << " " << day << ", " << year;
        break;
    case DisplayFormat::MEDIUM_ALTERNATE:
        cout << day << " " << months[month - 1] << " " << year;
        break;
    default:
        cout << "Invalid format";
        exit(EXIT_FAILURE);
        break;
    }
};