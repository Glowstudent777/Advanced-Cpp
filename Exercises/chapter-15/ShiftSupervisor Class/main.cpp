/*****
 * Author: Glowstudent
 * Program: ShiftSupervisor Class
 *****/

#include <iostream>
#include <iomanip>
#include "ShiftSupervisor.h"

using namespace std;

void displaySupervisorInfo(const ShiftSupervisor *w);

int main()
{
    ShiftSupervisor supervisor1;
    supervisor1.setName("Jane Smith");
    supervisor1.setIdNum("67890");
    supervisor1.setHireDate("02/15/2019");
    supervisor1.setAnnualSalary(55000.00);
    supervisor1.setAnnualProductionBonus(3000.00);

    ShiftSupervisor supervisor2("John Doe", "12345", "01/01/2020", 60000.00, 5000.00);

    cout << "Supervisor 1 Info:" << endl;
    displaySupervisorInfo(&supervisor1);
    cout << endl;
    cout << "Supervisor 2 Info:" << endl;
    displaySupervisorInfo(&supervisor2);
    cout << endl;

    return 0;
}

void displaySupervisorInfo(const ShiftSupervisor *super)
{
    cout << "Name: " << super->getName() << endl;
    cout << "ID Number: " << super->getIdNum() << endl;
    cout << "Hire Date: " << super->getHireDate() << endl;
    cout << "Annual Salary: $" << fixed << setprecision(2) << super->getAnnualSalary() << endl;
    cout << "Annual Production Bonus: $" << fixed << setprecision(2) << super->getAnnualProductionBonus() << endl;
}