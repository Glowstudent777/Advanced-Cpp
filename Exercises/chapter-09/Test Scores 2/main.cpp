/*****
 * Author: Glowstudent
 * Program: Test Scores 2
 *****/

#include <iostream>
#include <limits>
#include <string>

using namespace std;

struct Student
{
    string name;
    double score;
};

void getUserInput(Student *, int);
void arrSelectedSort(Student **, int);
double arrCalcAverage(const Student *, int);
void showArrPtr(Student **, int);

int main()
{
    int max;
    Student *students = nullptr;
    Student **studentPtrs = nullptr;

    cout << "Enter the number of students: ";
    cin >> max;

    while (cin.fail() || max <= 0)
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input. Please enter a positive integer: ";
        cin >> max;
    }

    students = new Student[max];
    studentPtrs = new Student *[max];

    getUserInput(students, max);

    for (int i = 0; i < max; i++)
    {
        *(studentPtrs + i) = (students + i);
    }

    arrSelectedSort(studentPtrs, max);

    cout << "The students and their scores, sorted in ascending order: \n";
    showArrPtr(studentPtrs, max);

    cout << "The average score is: " << arrCalcAverage(students, max) << endl;

    delete[] students;
    delete[] studentPtrs;

    return 0;
}

void getUserInput(Student *input, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Enter student " << i + 1 << "'s name: ";
        cin.ignore();
        getline(cin, input[i].name);

        cout << "Enter " << input[i].name << "'s score: ";
        cin >> input[i].score;

        while (cin.fail() || input[i].score < 0)
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter a positive number: ";
            cin >> input[i].score;
        }
    }
}

void arrSelectedSort(Student **arr, int size)
{
    int minIndex;
    Student *minElem;

    for (int startScan = 0; startScan < (size - 1); startScan++)
    {
        minIndex = startScan;
        minElem = *(arr + startScan);
        for (int index = startScan + 1; index < size; index++)
        {
            if ((*(arr + index))->score < minElem->score)
            {
                minElem = *(arr + index);
                minIndex = index;
            }
        }
        *(arr + minIndex) = *(arr + startScan);
        *(arr + startScan) = minElem;
    }
}

double arrCalcAverage(const Student *arr, int size)
{
    double total = 0.0;
    for (int count = 0; count < size; count++)
    {
        total += arr[count].score;
    }
    return total / size;
}

void showArrPtr(Student **arr, int size)
{
    for (int count = 0; count < size; count++)
    {
        cout << arr[count]->name << " - " << arr[count]->score << endl;
    }
}
