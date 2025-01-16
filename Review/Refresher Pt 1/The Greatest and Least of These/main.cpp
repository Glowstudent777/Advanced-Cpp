/*****
 * Author: Glowstudent
 * Program: The Greatest and Least of These
 *****/

#include <iostream>
#include <limits>

using namespace std;

int main()
{
    int largest = 0, smallest = 0, number;
    bool first = true;

    cout << "Enter a series of numbers. Enter -99 to end the series." << endl;

    do
    {
        cout << "Enter a number: ";
        cin >> number;

        while (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter a number: ";
            cin >> number;
        }

        if (first)
        {
            largest = number;
            smallest = number;
            first = false;
        }
        else if (number != -99)
        {
            if (number > largest)
            {
                largest = number;
            }
            if (number < smallest)
            {
                smallest = number;
            }
        }
    } while (number != -99);

    cout << endl;
    cout << "The largest number you entered was: " << largest << endl;
    cout << "The smallest number you entered was: " << smallest << endl;

    return 0;
}