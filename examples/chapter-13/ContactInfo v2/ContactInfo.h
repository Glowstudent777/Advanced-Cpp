#ifndef CONTACTINFO_H
#define CONTACTINFO_H

#include <cstring>

class ContactInfo
{
private:
    char *name;
    char *phone;

    void initName(char *n)
    {
        name = new char[strlen(n) + 1];
        strcpy(name, n);
    }

    void initPhone(char *p)
    {
        phone = new char[strlen(p) + 1];
        strcpy(phone, p);
    }

public:
    ContactInfo(char *n, char *p)
    {
        initName(n);
        initPhone(p);
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