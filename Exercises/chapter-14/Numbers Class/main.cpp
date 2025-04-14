/*****
 * Author: Glowstudent
 * Program: Numbers Class
 *****/

#include <iostream>
#include <limits>
#include "Numbers.h"

using namespace std;

int main()
{
    int n;

    cout << "Enter a number (0-9999): ";
    cin >> n;

    while (n < 0 || n > 9999 || cin.fail())
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input. Please enter a number between 0 and 9999: ";
        cin >> n;
    }
    Numbers number(n);

    cout << "\n\nThe number in words is: ";
    number.print();

    return 0;
}