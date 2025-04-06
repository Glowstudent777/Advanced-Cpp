/*****
 * Author: Glowstudent
 * Program: Number Array Class
 *****/

#include <iostream>
#include <iomanip>
#include <limits>
#include "FloatArray.h"

using namespace std;

int main()
{
    int size, position;
    float temp;

    cout << "How many numbers do you want to enter? ";
    cin >> size;

    if (size <= 0)
    {
        cout << "Invalid size. Exiting." << endl;
        return 1;
    }

    FloatArray fData(size);

    for (int i = 0; i < size; ++i)
    {
        float value;
        cout << "Enter number " << (i + 1) << ": ";
        cin >> value;

        while (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter a number: ";
            cin >> value;
        }

        fData.setValue(i, value);
    }

    cout << "\nAt what position do you want to set a new value? (1 to " << (size) << "): ";
    cin >> position;

    while (position < 1 || position > size)
    {
        cout << "Invalid position. Please enter a number between 1 and " << size << ": ";
        cin >> position;
    }

    cout << "Enter the new value for position " << position << ": ";
    cin >> temp;
    while (cin.fail())
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input. Please enter a number: ";
        cin >> temp;
    }
    fData.setValue((position - 1), temp);

    cout
        << fixed << setprecision(2);
    cout << "\nThe statistics of the numbers you entered are:\n";
    cout << "----------------------------------------------\n";
    cout << "The maximum number is: " << fData.getMax() << endl;
    cout << "The minimum number is: " << fData.getMin() << endl;
    cout << "The average is: " << fData.getAverage() << endl;

    cout << "\nThe numbers you entered are: ";
    for (int i = 0; i < size; ++i)
    {
        cout << fData.getValue(i) << " ";
    }
    cout << endl;

    return 0;
}