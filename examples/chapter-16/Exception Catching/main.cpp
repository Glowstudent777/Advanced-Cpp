#include <iostream>
#include <string>

using namespace std;

double divide(int, int);

int main()
{
    int num1, num2;
    double quotient;

    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    try
    {
        quotient = divide(num1, num2);
        cout << "The quotient is " << quotient << endl;
    }
    catch (string ex)
    {
        cout << "Exception: " << ex << endl;
    }

    cout << "End of program." << endl;

    return 0;
}

double divide(int numerator, int denominator)
{
    if (denominator == 0)
    {
        throw string("Division by zero is not allowed.");
    }
    return static_cast<double>(numerator) / denominator;
}