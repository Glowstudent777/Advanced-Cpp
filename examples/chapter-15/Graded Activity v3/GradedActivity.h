#ifndef GRADEDACTIVITY_H
#define GRADEDACTIVITY_H

class GradedActivity
{
protected:
    double score;

public:
    GradedActivity()
    {
        score = 0.0;
    }

    GradedActivity(double s)
    {
        score = s;
    }

    void setScore(double s)
    {
        score = s;
    }

    double getScore() const
    {
        return score;
    }

    virtual char getLetterGrade() const
    {
        char letterGrade;

        if (score >= 90)
            letterGrade = 'A';
        else if (score >= 80)
            letterGrade = 'B';
        else if (score >= 70)
            letterGrade = 'C';
        else if (score >= 60)
            letterGrade = 'D';
        else
            letterGrade = 'F';

        return letterGrade;
    }
};

#endif