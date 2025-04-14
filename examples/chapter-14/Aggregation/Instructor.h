#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include <iostream>
#include <string>

class Instructor
{
private:
    std::string firstName;
    std::string lastName;
    std::string officeNumber;

public:
    Instructor()
    {
        set("", "", "");
    }

    Instructor(std::string first, std::string last, std::string office)
    {
        set(first, last, office);
    }

    void set(std::string first, std::string last, std::string office)
    {
        firstName = first;
        lastName = last;
        officeNumber = office;
    }

    void print() const
    {
        std::cout << "Last Name: " << lastName << std::endl;
        std::cout << "First Name: " << firstName << std::endl;
        std::cout << "Office Number: " << officeNumber << std::endl;
    }
};

#endif