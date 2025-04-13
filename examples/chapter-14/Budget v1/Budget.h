#ifndef BUDGET_H
#define BUDGET_H

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
};

double Budget::corpBudget = 0.0;

#endif