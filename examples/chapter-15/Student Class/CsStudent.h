#ifndef CSSTUDENT_H
#define CSSTUDENT_H

#include "Student.h"

const int MATH_HOURS = 20;
const int CS_HOURS = 40;
const int GEN_ED_HOURS = 60;

class CsStudent : public Student
{
private:
    int mathHours;
    int csHours;
    int genEdHours;

public:
    CsStudent() : Student()
    {
        mathHours = 0;
        csHours = 0;
        genEdHours = 0;
    }

    CsStudent(std::string n, std::string id, int year) : Student(n, id, year)
    {
        mathHours = 0;
        csHours = 0;
        genEdHours = 0;
    }

    void setMathHours(int hours)
    {
        mathHours = hours;
    }

    void setCsHours(int hours)
    {
        csHours = hours;
    }

    void setGenEdHours(int hours)
    {
        genEdHours = hours;
    }

    virtual int getRemainingHours() const override
    {
        int reqHours, remainingHours;

        reqHours = MATH_HOURS + CS_HOURS + GEN_ED_HOURS;
        remainingHours = reqHours - (mathHours + csHours + genEdHours);

        return remainingHours;
    }
};

#endif