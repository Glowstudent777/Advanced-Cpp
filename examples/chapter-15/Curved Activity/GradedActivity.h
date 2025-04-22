#ifndef GRADEDACTIVITY_H
#define GRADEDACTIVITY_H

class GradedActivity
{
protected:
    char letter;
    double score;

    void determineGrade()
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

        letter = letterGrade;
    }

public:
    GradedActivity()
    {
        letter = ' ';
        score = 0.0;
    }

    GradedActivity(double s)
    {
        score = s;
        determineGrade();
    }

    void setScore(double s)
    {
        score = s;
    }

    char getLetterGrade() const
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

    double getScore() const
    {
        return score;
    }
};

#endif