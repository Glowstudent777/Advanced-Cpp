#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <cstring>

class Employee
{
private:
    char *name;
    int idNumber;
    char *department;
    char *position;

    void copyString(char *&dest, const char *src)
    {
        delete[] dest;
        dest = new char[strlen(src) + 1];
        strcpy(dest, src);
    }

public:
    Employee(const char *n, int id, const char *d, const char *p) : idNumber(id)
    {
        name = new char[strlen(n) + 1];
        department = new char[strlen(d) + 1];
        position = new char[strlen(p) + 1];

        strcpy(name, n);
        strcpy(department, d);
        strcpy(position, p);
    }

    Employee(const char *n, int id) : Employee(n, id, "", "") {}

    Employee() : Employee("", 0, "", "") {}

    ~Employee()
    {
        delete[] name;
        delete[] department;
        delete[] position;
    }

    const char *getName() const { return name; }
    int getIdNumber() const { return idNumber; }
    const char *getDepartment() const { return department; }
    const char *getPosition() const { return position; }

    void setName(const char *n) { copyString(name, n); }
    void setIdNumber(int id) { idNumber = id; }
    void setDepartment(const char *d) { copyString(department, d); }
    void setPosition(const char *p) { copyString(position, p); }
};

#endif