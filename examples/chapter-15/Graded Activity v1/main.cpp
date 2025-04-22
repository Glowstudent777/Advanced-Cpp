#include <iostream>
#include <iomanip>
#include "FinalExam.h"

using namespace std;

int main()
{
    int questions, missed;

    cout << "Enter the number of questions on the exam: ";
    cin >> questions;

    cout << "Enter the number of questions missed: ";
    cin >> missed;

    FinalExam test(questions, missed);

    cout << fixed << showpoint << setprecision(2);
    cout << "The score is " << test.getScore() << endl;
    cout << "The letter grade is " << test.getLetterGrade() << endl;

    return 0;
}