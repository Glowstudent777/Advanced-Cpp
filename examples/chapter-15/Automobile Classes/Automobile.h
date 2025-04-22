#ifndef AUTOMOBILE_H
#define AUTOMOBILE_H

#include <string>

class Automobile
{
private:
    std::string make;
    int model;
    int mileage;
    double price;

public:
    Automobile()
    {
        make = "";
        model = 0;
        mileage = 0;
        price = 0.0;
    }

    Automobile(std::string mk, int mdl, int mil, double prc)
    {
        make = mk;
        model = mdl;
        mileage = mil;
        price = prc;
    }

    std::string getMake() const
    {
        return make;
    }

    int getModel() const
    {
        return model;
    }

    int getMileage() const
    {
        return mileage;
    }

    double getPrice() const
    {
        return price;
    }
};

#endif