#include <iostream>
#include <iomanip>

using namespace std;

template <class T>
T square(T value)
{
    return value * value;
}

int main()
{
    int userInt;
    double userDouble;

    cout << setprecision(5);
    cout << "Enter an integer and a floating-point number: ";
    cin >> userInt >> userDouble;

    cout << "Here are the squares of those numbers:\n";
    cout << "Integer: " << square(userInt) << endl;
    cout << "Double: " << square(userDouble) << endl;

    return 0;
}