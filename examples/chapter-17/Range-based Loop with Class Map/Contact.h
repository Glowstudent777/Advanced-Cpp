#ifndef CONTACT_H
#define CONTACT_H

#include <string>

class Contact
{
private:
    std::string name;
    std::string email;

public:
    Contact()
    {
        name = "";
        email = "";
    }

    Contact(std::string n, std::string e)
    {
        name = n;
        email = e;
    }

    void setName(std::string n)
    {
        name = n;
    }

    void setEmail(std::string e)
    {
        email = e;
    }

    std::string getName()
    {
        return name;
    }

    std::string getEmail()
    {
        return email;
    }
};

#endif