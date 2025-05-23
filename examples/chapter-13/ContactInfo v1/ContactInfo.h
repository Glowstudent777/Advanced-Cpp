#ifndef CONTACTINFO_H
#define CONTACTINFO_H

#include <cstring>

class ContactInfo
{
private:
    char *name;
    char *phone;

public:
    ContactInfo(char *n, char *p)
    {
        name = new char[strlen(n) + 1];
        phone = new char[strlen(p) + 1];

        strcpy(name, n);
        strcpy(phone, p);
    }

    ~ContactInfo()
    {
        delete[] name;
        delete[] phone;
    }

    const char *getName() const
    {
        return name;
    }

    const char *getPhoneNumber() const
    {
        return phone;
    }
};

#endif