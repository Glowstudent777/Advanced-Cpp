#ifndef SHIFTSUPERVISOR_H
#define SHIFTSUPERVISOR_H

#include "Employee.h"

class ShiftSupervisor : public Employee
{
    double annualSalary;
    double annualProductionBonus;

public:
    ShiftSupervisor() : Employee()
    {
        annualSalary = 0.0;
        annualProductionBonus = 0.0;
    }

    ShiftSupervisor(std::string n, std::string id, std::string hDate, double aSalary, double aBonus) : Employee(n, id, hDate)
    {
        annualSalary = aSalary;
        annualProductionBonus = aBonus;
    }

    void setAnnualSalary(double aSalary)
    {
        annualSalary = aSalary;
    }

    void setAnnualProductionBonus(double aBonus)
    {
        annualProductionBonus = aBonus;
    }

    double getAnnualSalary() const
    {
        return annualSalary;
    }

    double getAnnualProductionBonus() const
    {
        return annualProductionBonus;
    }
};

#endif