#ifndef FINALEXAM_H
#define FINALEXAM_H

#include "GradedActivity.h"

class FinalExam : public GradedActivity
{
private:
    int numQuestions;
    double pointsEach;
    int numMissed;

public:
    FinalExam()
    {
        numQuestions = 0;
        pointsEach = 0.0;
        numMissed = 0;
    }

    FinalExam(int questions, int missed)
    {
        set(questions, missed);
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

    int getNumQuestions() const
    {
        return numQuestions;
    }

    double getPointsEach() const
    {
        return pointsEach;
    }

    int getNumMissed() const
    {
        return numMissed;
    }
};

#endif