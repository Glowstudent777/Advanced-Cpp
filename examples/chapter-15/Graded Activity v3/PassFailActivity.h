#ifndef PASSFAILACTIVTIY_H
#define PASSFAILACTIVTIY_H

#include "GradedActivity.h"

class PassFailActivity : public GradedActivity
{
protected:
    double minPassingScore;

public:
    PassFailActivity() : GradedActivity()
    {
        minPassingScore = 0.0;
    }

    PassFailActivity(double mps) : GradedActivity()
    {
        minPassingScore = mps;
    }

    void setMinPassingScore(double mps)
    {
        minPassingScore = mps;
    }

    double getMinPassingScore() const
    {
        return minPassingScore;
    }

    virtual char getLetterGrade() const
    {
        char letterGrade;

        if (score >= minPassingScore)
            letterGrade = 'P';
        else
            letterGrade = 'F';

        return letterGrade;
    }
};

#endif