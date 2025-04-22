#ifndef PRODUCTIONWORKER_H
#define PRODUCTIONWORKER_H

#include "Employee.h"

class ProductionWorker : public Employee
{
private:
    int shift;
    double payRate;

public:
    ProductionWorker() : Employee()
    {
        shift = 0;
        payRate = 0.0;
    }

    ProductionWorker(std::string n, std::string id, std::string hDate, int s, double pRate) : Employee(n, id, hDate)
    {
        shift = s;
        payRate = pRate;
    }

    void setShift(int s)
    {
        shift = s;
    }

    void setPayRate(double pRate)
    {
        payRate = pRate;
    }

    int getShift() const
    {
        return shift;
    }

    double getPayRate() const
    {
        return payRate;
    }
};

#endif