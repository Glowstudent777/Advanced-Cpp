#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>

class Product
{
private:
    std::string name;
    int units;

public:
    Product(std::string n, int u)
    {
        name = n;
        units = u;
    }

    void setName(std::string n)
    {
        name = n;
    }

    void setUnits(int u)
    {
        units = u;
    }

    std::string getName() const
    {
        return name;
    }

    int getUnits() const
    {
        return units;
    }
};

#endif