/*****
 * Author: Glowstudent
 * Program: Employee Class
 *****/

#include <iostream>
#include "Employee.h"
#include <iomanip>

using namespace std;

int main()
{
    const int SIZE = 3;

    Employee employees[SIZE] = {
        Employee("Susan Meyers", 47899, "Accounting", "Vice President"),
        Employee("Mark Jones", 39119),
        Employee()};

    employees[1].setDepartment("IT");
    employees[1].setPosition("Programmer");

    employees[2].setName("Joy Rogers");
    employees[2].setIdNumber(81774);
    employees[2].setDepartment("Manufacturing");
    employees[2].setPosition("Engineer");

    cout << setw(14) << "Name" << setw(8) << "ID" << setw(16) << "Department" << setw(20) << "Position" << endl;
    cout << "----------------------------------------------------------" << endl;

    for (int count = 0; count < SIZE; count++)
    {
        cout << setw(14) << employees[count].getName() << setw(8) << employees[count].getIdNumber() << setw(16) << employees[count].getDepartment() << setw(20) << employees[count].getPosition() << endl;
    }

    return 0;
}