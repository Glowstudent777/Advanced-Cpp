#ifndef DATETIME_H
#define DATETIME_H

#include <iostream>
#include "Date.h"
#include "Time.h"

class DateTime : public Date, public Time
{
public:
    DateTime() : Date(), Time() {}

    DateTime(int d, int m, int y, int h, int min, int s) : Date(d, m, y), Time(h, min, s) {}

    void showDateTime() const
    {
        std::cout << getMonth() << "/" << getDay() << "/" << getYear() << " "
                  << getHour() << ":" << getMin() << ":" << getSec() << std::endl;
    }
};

#endif