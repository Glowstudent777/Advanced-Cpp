#include <iostream>
#include "FeetInches.h"

using namespace std;

int main()
{
    FeetInches first, second;

    cout << "Enter a distance in feet and inches:\n";
    cin >> first;

    cout << "Enter another distance in feet and inches:\n";
    cin >> second;

    cout << "The values you entered are:" << endl;
    cout << first << endl;
    cout << second << endl;

    return 0;
}