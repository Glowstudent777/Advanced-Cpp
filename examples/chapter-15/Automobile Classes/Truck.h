#ifndef TRUCK_H
#define TRUCK_H

#include "Automobile.h"
#include <string>

class Truck : public Automobile
{
private:
    std::string driveType;

public:
    Truck() : Automobile()
    {
        driveType = "";
    }

    Truck(std::string mk, int mdl, int mil, double prc, std::string dt) : Automobile(mk, mdl, mil, prc)
    {
        driveType = dt;
    }

    std::string getDriveType() const
    {
        return driveType;
    }
};

#endif