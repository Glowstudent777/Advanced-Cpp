#include <iostream>
#include "FeetInches.h"

using namespace std;

int main()
{
    double d;
    int i;

    FeetInches distance;

    cout << "Enter a distance in feet and inches:\n";
    cin >> distance;

    d = distance;
    i = distance;

    cout << "The value " << distance << " is " << d << " feet.\n";
    cout << "Or " << i << " feet, rounded down.\n\n";

    return 0;
}