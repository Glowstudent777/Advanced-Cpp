#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>

class Customer
{
private:
    int custNumber;
    std::string name;

public:
    Customer(int cNum, std::string n)
    {
        custNumber = cNum;
        name = n;
    }

    void setCustNumber(int cNum)
    {
        custNumber = cNum;
    }

    void setName(std::string n)
    {
        name = n;
    }

    int getCustNumber() const
    {
        return custNumber;
    }

    std::string getName() const
    {
        return name;
    }

    bool operator<(const Customer &right) const
    {
        bool status = false;

        if (custNumber < right.custNumber)
            status = true;

        return status;
    }
};

#endif