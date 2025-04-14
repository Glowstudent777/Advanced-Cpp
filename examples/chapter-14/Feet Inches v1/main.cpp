#include <iostream>
#include "FeetInches.h"

using namespace std;

int main()
{
    int feet, inches;

    FeetInches first, second, third;

    cout << "Enter a distance in feet and inches: ";
    cin >> feet >> inches;

    first.setFeet(feet);
    first.setInches(inches);

    cout << "Enter another distance in feet and inches: ";
    cin >> feet >> inches;

    second.setFeet(feet);
    second.setInches(inches);

    third = first + second;

    cout << "First + Second = " << third.getFeet() << "' " << third.getInches() << "\"" << endl;

    third = first - second;
    cout << "First - Second = " << third.getFeet() << "' " << third.getInches() << "\"" << endl;

    return 0;
}