#ifndef MONTH_H
#define MONTH_H

#include <string>
#include <iostream>

class Month;

static std::string months[12] = {"January", "February", "March", "April",
                                 "May", "June", "July", "August",
                                 "September", "October", "November", "December"};

static std::string stolower(std::string str);
std::ostream &operator<<(std::ostream &, const Month &);
std::istream &operator>>(std::istream &, Month &);

class Month
{
private:
    std::string name;
    int monthNumber;

public:
    Month(int m = 1)
    {
        if (m < 1 || m > 12)
            throw "Invalid month value.";
        monthNumber = m;
        name = months[m - 1];
    }

    Month(std::string m)
    {
        for (int i = 0; i < 12; i++)
        {
            if (stolower(m) == stolower(months[i]))
            {
                monthNumber = i + 1;
                name = m;
                return;
            }
        }
        throw "Invalid month name.";
    }

    std::string getMonthName(int m) const
    {
        return months[m - 1];
    }

    int getMonthNumber() const
    {
        return monthNumber;
    }

    void setMonthNumber(int m)
    {
        if (m < 1 || m > 12)
            throw "Invalid month value.";
        monthNumber = m;
        name = months[m - 1];
    }

    void setMonthName(std::string m)
    {
        for (int i = 0; i < 12; i++)
        {
            if (stolower(m) == stolower(months[i]))
            {
                monthNumber = i + 1;
                name = m;
                return;
            }
        }
        throw "Invalid month name.";
    }

    Month operator++(int)
    {
        Month temp = *this;
        monthNumber++;
        if (monthNumber > 12)
            monthNumber = 1;
        name = months[monthNumber - 1];
        return temp;
    }

    Month operator--(int)
    {
        Month temp = *this;
        monthNumber--;
        if (monthNumber < 1)
            monthNumber = 12;
        name = months[monthNumber - 1];
        return temp;
    }

    Month operator++()
    {
        monthNumber++;
        if (monthNumber > 12)
            monthNumber = 1;
        name = months[monthNumber - 1];
        return *this;
    }

    Month operator--()
    {
        monthNumber--;
        if (monthNumber < 1)
            monthNumber = 12;
        name = months[monthNumber - 1];
        return *this;
    }

    friend std::ostream &operator<<(std::ostream &strm, const Month &obj)
    {
        strm << obj.name;
        return strm;
    }

    friend std::istream &operator>>(std::istream &strm, Month &obj)
    {
        std::string m;
        std::cout << "Enter a month name: ";
        strm >> m;

        for (int i = 0; i < 12; i++)
        {
            if (stolower(m) == stolower(months[i]))
            {
                obj.monthNumber = i + 1;
                obj.name = m;
                return strm;
            }
        }
        throw "Invalid month name.";

        return strm;
    }
};

static std::string stolower(std::string str)
{
    for (char &c : str)
    {
        c = tolower(c);
    }
    return str;
}

#endif