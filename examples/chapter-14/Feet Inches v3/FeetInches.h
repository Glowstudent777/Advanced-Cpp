#ifndef FEETINCHES_H
#define FEETINCHES_H

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
};

#endif