#ifndef CAR_H
#define CAR_H

#include "Automobile.h"
#include <string>

class Car : public Automobile
{
private:
    int doors;

public:
    Car() : Automobile()
    {
        doors = 0;
    }

    Car(std::string mk, int mdl, int mil, double prc, int drs) : Automobile(mk, mdl, mil, prc)
    {
        doors = drs;
    }

    int getDoors() const
    {
        return doors;
    }
};

#endif