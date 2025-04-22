#include <iostream>
#include <iomanip>
#include "PassFailExam.h"

using namespace std;

int main()
{
    int questions, missed;
    double minPassingScore;

    cout << "Enter the number of questions on the exam: ";
    cin >> questions;

    cout << "Enter the number of questions missed: ";
    cin >> missed;

    cout << "Enter the minimum passing score: ";
    cin >> minPassingScore;

    PassFailExam exam(questions, missed, minPassingScore);

    cout << fixed << showpoint << setprecision(2);
    cout << "\nEach question is worth " << exam.getPointsEach() << " points.\n";
    cout << "The minimum passing score is " << exam.getMinPassingScore() << ".\n";
    cout << "The student's score is " << exam.getScore() << ".\n";
    cout << "The student's letter grade is " << exam.getLetterGrade() << ".\n";

    return 0;
}