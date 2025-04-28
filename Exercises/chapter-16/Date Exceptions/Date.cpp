#include "Date.h"
#include <iostream>
#include <cstdlib>
#include <cctype>
#include <string>

using namespace std;

string months[12] = {"January", "February", "March", "April", "May", "June",
                     "July", "August", "September", "October", "November", "December"};

Date::Date(int m, int d, int y)
{
    setMonth(m);
    setDay(d);
    setYear(y);
}

void Date::setMonth(int m)
{
    if (m < 1 || m > 12 || isalpha(m))
        throw InvalidMonth(m);
    else
        month = m;
}

void Date::setDay(int d)
{
    if (d < 1 || d > 31 || isalpha(d))
        throw InvalidDay(d);
    else
        day = d;
}

void Date::setYear(int y)
{
    if (y < 0 || isalpha(y))
        throw InvalidYear(y);
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
        throw InvalidFormat(df);
        break;
    }
};