/*****
 * Author: Glowstudent
 * Program: Test Scores
 * Note: I don't know why I can't use the examples with dynamic memory allocation with pointers so using ** instead of * for some things because that works somehow.
 *****/

#include <iostream>
#include <limits>

using namespace std;

void getUserInput(double *, int);
void arrSelectedSort(double **, int);
double arrCalcAverage(const double *, int);
void showArrPtr(double **, int);

int main()
{
    int max;
    double *scores = nullptr;
    double **scorePtrs = nullptr;

    cout << "Enter the number of test scores: ";
    cin >> max;

    while (cin.fail() || max <= 0)
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input. Please enter a positive integer: ";
        cin >> max;
    }

    scores = new double[max];
    scorePtrs = new double *[max];

    getUserInput(scores, max);

    for (int i = 0; i < max; i++)
    {
        *(scorePtrs + i) = (scores + i);
    }

    arrSelectedSort(scorePtrs, max);

    cout << "The test scores, sorted in ascending order are: \n";
    showArrPtr(scorePtrs, max);

    cout << "The average test score is: " << arrCalcAverage(scores, max) << endl;

    delete[] scores;
    delete[] scorePtrs;

    return 0;
}

void getUserInput(double *input, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Enter test score " << i + 1 << ": ";
        cin >> *(input + i);

        while (cin.fail() || *(input + i) < 0)
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter a positive number: ";
            cin >> *(input + i);
        }
    }
}

void arrSelectedSort(double **arr, int size)
{
    int minIndex;
    double *minElem;

    for (int startScan = 0; startScan < (size - 1); startScan++)
    {
        minIndex = startScan;
        minElem = *(arr + startScan);
        for (int index = startScan + 1; index < size; index++)
        {
            if (**(arr + index) < *minElem)
            {
                minElem = *(arr + index);
                minIndex = index;
            }
        }
        *(arr + minIndex) = *(arr + startScan);
        *(arr + startScan) = minElem;
    }
}

double arrCalcAverage(const double *arr, int size)
{
    double total = 0.0;
    for (int count = 0; count < size; count++)
    {
        total += *(arr + count);
    }
    return total / size;
}

void showArrPtr(double **arr, int size)
{
    for (int count = 0; count < size; count++)
    {
        cout << **(arr + count) << " ";
    }
    cout << endl;
}
