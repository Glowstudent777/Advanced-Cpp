#ifndef BUDGET_H
#define BUDGET_H

#include "Auxil.h"

class Budget
{
private:
    static double corpBudget;
    double divisionBudget;

public:
    Budget() { divisionBudget = 0.0; }

    void addBudget(double amount)
    {
        divisionBudget += amount;
        corpBudget += amount;
    }

    double getDivisionBudget() const
    {
        return divisionBudget;
    }

    double getCorpBudget() const
    {
        return corpBudget;
    }

    static void mainOffice(double);

    friend void AuxiliaryOffice::addBudget(double, Budget &);
};

#endif