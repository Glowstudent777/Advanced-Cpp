#ifndef DATE_H
#define DATE_H

enum DisplayFormat
{
    SHORT = 1,
    MEDIUM,
    MEDIUM_ALTERNATE
};

class Date
{
private:
    int month;
    int day;
    int year;

public:
    Date(int m = 1, int d = 1, int y = 1900);

    void setMonth(int m);
    void setDay(int d);
    void setYear(int y);

    int getMonth() const
    {
        return month;
    }

    int getDay() const
    {
        return day;
    }

    int getYear() const
    {
        return year;
    }

    void displayDate(DisplayFormat df = DisplayFormat::SHORT) const;
};

#endif