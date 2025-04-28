#include <iostream>

using namespace std;

template <class T>
T sum(T a, T b)
{
    return a + b;
}

template <class T>
T sum(T a, T b, T c)
{
    return a + b + c;
}

int main()
{
    double num1, num2, num3;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "The sum of " << num1 << " and " << num2 << " is: " << sum(num1, num2) << endl;

    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;
    cout << "The sum of " << num1 << ", " << num2 << ", and " << num3 << " is: " << sum(num1, num2, num3) << endl;

    return 0;
}