#ifndef CURVEDACTIVITY_H
#define CURVEDACTIVITY_H

#include "GradedActivity.h"

class CurvedActivity : public GradedActivity
{
protected:
    double rawScore;
    double percentage;

public:
    CurvedActivity() : GradedActivity()
    {
        rawScore = 0.0;
        percentage = 0.0;
    }

    void setScore(double s)
    {
        rawScore = s;

        GradedActivity::setScore(rawScore * percentage);
    }

    void setPercentage(double p)
    {
        percentage = p;
    }

    double getRawScore() const
    {
        return rawScore;
    }

    double getPercentage() const
    {
        return percentage;
    }
};

#endif