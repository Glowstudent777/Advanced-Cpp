#include <iostream>
#include <iomanip>
#include "CurvedActivity.h"

using namespace std;

int main()
{
    double numericScore, percentage;

    CurvedActivity exam;

    cout << "Enter the numeric score: ";
    cin >> numericScore;

    cout << "Enter the curve percentage: ";
    cin >> percentage;

    exam.setPercentage(percentage);
    exam.setScore(numericScore);

    cout << fixed << showpoint << setprecision(2);
    cout << "The raw score is: " << exam.getRawScore() << endl;
    cout << "The curved score is: " << exam.getScore() << endl;
    cout << "The letter grade is: " << exam.getLetterGrade() << endl;

    return 0;
}