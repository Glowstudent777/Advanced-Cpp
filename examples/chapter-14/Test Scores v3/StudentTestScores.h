#ifndef STUDENTTESTSCORES_H
#define STUDENTTESTSCORES_H

#include <string>

using namespace std;

const double DEFAULT_SCORE = 0.0;

class StudentTestScores
{
private:
    string name;
    double *testScores;
    int numTestScores;

    void createTestScoresArray(int size)
    {
        numTestScores = size;
        testScores = new double[numTestScores];

        for (int i = 0; i < numTestScores; i++)
        {
            testScores[i] = DEFAULT_SCORE;
        }
    }

public:
    StudentTestScores(string studentName, int numScores)
    {
        name = studentName;
        createTestScoresArray(numScores);
    }

    StudentTestScores(const StudentTestScores &obj)
    {
        name = obj.name;
        numTestScores = obj.numTestScores;
        testScores = new double[numTestScores];

        for (int i = 0; i < numTestScores; i++)
        {
            testScores[i] = obj.testScores[i];
        }
    }

    const StudentTestScores operator=(const StudentTestScores &right)
    {
        if (this != &right)
        {
            delete[] testScores;
            name = right.name;
            numTestScores = right.numTestScores;
            testScores = new double[numTestScores];

            for (int i = 0; i < numTestScores; i++)
            {
                testScores[i] = right.testScores[i];
            }
        }
        return *this;
    }

    ~StudentTestScores()
    {
        delete[] testScores;
    }

    void setTestScore(double score, int index)
    {
        testScores[index] = score;
    }

    void setStudentName(string studentName)
    {
        name = studentName;
    }

    string getStudentName() const
    {
        return name;
    }

    int getNumTestScores() const
    {
        return numTestScores;
    }

    double getTestScore(int index) const
    {
        return testScores[index];
    }
};

#endif