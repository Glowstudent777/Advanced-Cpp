#ifndef DAYOFYEAR_H
#define DAYOFYEAR_H

#include <iostream>
#include <iomanip>
#include <string>

static std::string months[12] = {
    "January", "February", "March", "April",
    "May", "June", "July", "August",
    "September", "October", "November", "December"};

static int daysInMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

class DayOfYear
{
private:
    unsigned int day;

public:
    DayOfYear(int d)
    {
        if (d < 1 || d > 365)
        {
            throw "Invalid day value.";
        }
        else
        {
            day = d;
        }
    }

    void print()
    {
        int month = 0;
        int dayOfMonth = day;

        while (dayOfMonth > daysInMonth[month])
        {
            dayOfMonth -= daysInMonth[month];
            month++;
        }

        std::cout << months[month] << " " << dayOfMonth << std::endl;
    }
};

#endif