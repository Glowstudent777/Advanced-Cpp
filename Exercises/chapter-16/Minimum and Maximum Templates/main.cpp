/*****
 * Author: Glowstudent
 * Program: Minimum and Maximum Templates
 *****/

#include <iostream>
#include "FeetInches.h"

using namespace std;

template <class T>
T minimum(T a, T b)
{
    return (a < b) ? a : b;
}

template <class T>
T maximum(T a, T b)
{
    return (a > b) ? a : b;
}

int main()
{
    int a = 5, b = 10;
    double c = 3.14, d = 2.71;
    FeetInches f1(5, 8), f2(6, 2);

    cout << "Integers:" << endl;
    cout << "Minimum of " << a << " and " << b << " is: " << minimum(a, b) << endl;
    cout << "Maximum of " << a << " and " << b << " is: " << maximum(a, b) << endl
         << endl;

    cout << "Doubles:" << endl;
    cout << "Minimum of " << c << " and " << d << " is: " << minimum(c, d) << endl;
    cout << "Maximum of " << c << " and " << d << " is: " << maximum(c, d) << endl
         << endl;

    cout << "Class FeetInches:" << endl;
    cout << "Minimum of " << f1 << " and " << f2 << " is: " << minimum(f1, f2) << endl;
    cout << "Maximum of " << f1 << " and " << f2 << " is: " << maximum(f1, f2) << endl;

    return 0;
}