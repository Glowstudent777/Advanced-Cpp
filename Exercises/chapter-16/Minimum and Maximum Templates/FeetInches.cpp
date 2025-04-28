#include <cstdlib>
#include "FeetInches.h"

void FeetInches::simplify()
{
    if (inches >= 12)
    {
        feet += inches / 12;
        inches = inches % 12;
    }
    else if (inches < 0)
    {
        feet -= ((abs(inches) / 12) + 1);
        inches = 12 - (abs(inches) % 12);
    }
}

FeetInches FeetInches::operator+(const FeetInches &right)
{
    FeetInches temp;

    temp.inches = inches + right.inches;
    temp.feet = feet + right.feet;
    temp.simplify();

    return temp;
}

FeetInches FeetInches::operator-(const FeetInches &right)
{
    FeetInches temp;

    temp.inches = inches - right.inches;
    temp.feet = feet - right.feet;
    temp.simplify();

    return temp;
}

FeetInches FeetInches::operator++()
{
    ++inches;
    simplify();
    return *this;
}

FeetInches FeetInches::operator++(int)
{
    FeetInches temp(feet, inches);
    ++inches;
    simplify();
    return temp;
}

bool FeetInches::operator>(const FeetInches &right)
{
    bool status;

    if (feet > right.feet)
        status = true;
    else if (feet == right.feet && inches > right.inches)
        status = true;
    else
        status = false;

    return status;
}

bool FeetInches::operator<(const FeetInches &right)
{
    bool status;

    if (feet < right.feet)
        status = true;
    else if (feet == right.feet && inches < right.inches)
        status = true;
    else
        status = false;

    return status;
}

bool FeetInches::operator==(const FeetInches &right)
{
    bool status;

    if (feet == right.feet && inches == right.inches)
        status = true;
    else
        status = false;

    return status;
}

std::ostream &operator<<(std::ostream &strm, const FeetInches &obj)
{
    strm << obj.feet << " feet, " << obj.inches << " inches";
    return strm;
}

std::istream &operator>>(std::istream &strm, FeetInches &obj)
{
    std::cout << "Feet: ";
    strm >> obj.feet;

    std::cout << "Inches: ";
    strm >> obj.inches;

    obj.simplify();

    return strm;
}

FeetInches::operator double()
{
    double temp = feet;

    temp += (inches / 12.0);
    return temp;
}

FeetInches::operator int()
{
    return feet;
}