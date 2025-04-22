#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

class Employee
{
private:
    std::string name;
    std::string idNum;
    std::string hireDate;

public:
    Employee()
    {
        name = "";
        idNum = "";
        hireDate = "";
    }

    Employee(std::string n, std::string id, std::string hDate)
    {
        name = n;
        idNum = id;
        hireDate = hDate;
    }

    void setName(std::string n)
    {
        name = n;
    }

    void setIdNum(std::string id)
    {
        idNum = id;
    }

    void setHireDate(std::string hDate)
    {
        hireDate = hDate;
    }

    std::string getName() const
    {
        return name;
    }

    std::string getIdNum() const
    {
        return idNum;
    }

    std::string getHireDate() const
    {
        return hireDate;
    }
};

#endif