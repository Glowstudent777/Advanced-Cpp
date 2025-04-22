#include <iostream>
#include <iomanip>
#include "PassFailExam.h"

using namespace std;

void displayGrade(const GradedActivity &ga);
void altDisplayGrade(const GradedActivity *gaPtr);

int main()
{
    const int NUM_TESTS = 4;

    GradedActivity *testArr[NUM_TESTS] =
        {new GradedActivity(88),
         new PassFailExam(100, 25, 70),
         new GradedActivity(67),
         new PassFailExam(50, 12, 60)};

    GradedActivity test1(88);
    PassFailExam test2(100, 25, 70);

    cout << "Main function:\n";
    cout << "Test 1:\n";
    displayGrade(test1);
    cout << "\nTest 2:\n";
    displayGrade(test2);

    cout << "\n\nUsing a pointer to the base class:\n";
    cout << "Test 1:\n";
    altDisplayGrade(&test1);
    cout << "\nTest 2:\n";
    altDisplayGrade(&test2);

    cout << "\n\nUsing an array of pointers to the base class:\n";
    for (int i = 0; i < NUM_TESTS; i++)
    {
        cout << "Test " << (i + 1) << ":\n";
        altDisplayGrade(testArr[i]);
        cout << endl;
    }

    return 0;
}

void displayGrade(const GradedActivity &ga)
{
    cout << fixed << setprecision(1);
    cout << "The activity's numeric score is " << ga.getScore() << endl;
    cout << "The activity's letter grade is " << ga.getLetterGrade() << endl;
}

void altDisplayGrade(const GradedActivity *gaPtr)
{
    cout << fixed << setprecision(1);
    cout << "The activity's numeric score is " << gaPtr->getScore() << endl;
    cout << "The activity's letter grade is " << gaPtr->getLetterGrade() << endl;
}