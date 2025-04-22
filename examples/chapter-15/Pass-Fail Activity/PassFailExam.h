#ifndef PASSFAILEXAM_H
#define PASSFAILEXAM_H

#include "PassFailActivity.h"

class PassFailExam : public PassFailActivity
{
private:
    int numQuestions;
    double pointsEach;
    int numMissed;

public:
    PassFailExam() : PassFailActivity()
    {
        numQuestions = 0;
        pointsEach = 0.0;
        numMissed = 0;
    }

    PassFailExam(int q, int m, double mps) : PassFailActivity(mps)
    {
        set(q, m);
    }

    void set(int q, int m)
    {
        double nScore;

        numQuestions = q;
        numMissed = m;

        pointsEach = 100.0 / numQuestions;
        nScore = 100.0 - (numMissed * pointsEach);

        setScore(nScore);
    }

    double getPointsEach() const
    {
        return pointsEach;
    }

    int getNumQuestions() const
    {
        return numQuestions;
    }

    int getNumMissed() const
    {
        return numMissed;
    }
};

#endif