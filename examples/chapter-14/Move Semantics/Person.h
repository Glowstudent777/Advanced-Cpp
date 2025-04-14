#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <cstring>
#include <algorithm>

class Person
{
private:
    char *name;

public:
    Person()
    {
        std::cout << "*** default constructor called ***\n";
        name = nullptr;
    }

    Person(const char *n)
    {
        std::cout << "*** parameterized constructor ***\n";
        name = new char[strlen(n) + 1];
        strcpy(name, n);
    }

    Person(const Person &obj)
    {
        std::cout << "*** copy constructor called ***\n";
        name = new char[strlen(obj.name) + 1];
        strcpy(name, obj.name);
    }

    ~Person()
    {
        std::cout << "*** destructor called ***\n";
        delete[] name;
    }

    Person &operator=(const Person &right)
    {
        std::cout << "*** assignment operator called ***\n";
        if (this != &right)
        {
            if (name != nullptr)
                delete[] name;
            name = new char[strlen(right.name) + 1];
            strcpy(name, right.name);
        }
        return *this;
    }

    Person &operator=(Person &&right)
    {
        if (this != &right)
        {
            swap(name, right.name);
        }
        return *this;
    }

    Person(Person &&temp)
    {
        name = temp.name;
        temp.name = nullptr;
    }

    char *getName() const
    {
        return name;
    }
};

#endif