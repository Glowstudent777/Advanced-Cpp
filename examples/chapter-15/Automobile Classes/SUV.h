#ifndef SUV_H
#define SUV_H

#include "Automobile.h"
#include <string>

class SUV : public Automobile
{
private:
    int passengers;

public:
    SUV() : Automobile()
    {
        passengers = 0;
    }

    SUV(std::string mk, int mdl, int mil, double prc, int psg) : Automobile(mk, mdl, mil, prc)
    {
        passengers = psg;
    }

    int getPassengers() const
    {
        return passengers;
    }
};

#endif