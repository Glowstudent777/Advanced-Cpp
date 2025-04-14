#ifndef FEETINCHES_H
#define FEETINCHES_H

#include <iostream>

class FeetInches;

std::ostream &operator<<(std::ostream &, const FeetInches &);
std::istream &operator>>(std::istream &, FeetInches &);

class FeetInches
{
private:
    int feet;
    int inches;
    void simplify();

public:
    FeetInches(int f = 0, int i = 0)
    {
        feet = f;
        inches = i;
        simplify();
    }

    void setFeet(int f)
    {
        feet = f;
    }

    void setInches(int i)
    {
        inches = i;
        simplify();
    }

    int getFeet() const
    {
        return feet;
    }

    int getInches() const
    {
        return inches;
    }

    FeetInches operator+(const FeetInches &right);
    FeetInches operator-(const FeetInches &right);
    FeetInches operator++();
    FeetInches operator++(int);
    bool operator>(const FeetInches &right);
    bool operator<(const FeetInches &right);
    bool operator==(const FeetInches &right);

    operator double();
    operator int();

    friend std::ostream &operator<<(std::ostream &output, const FeetInches &f);
    friend std::istream &operator>>(std::istream &input, FeetInches &f);
};

#endif