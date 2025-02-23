#include <iostream>
#include <cctype>

using namespace std;

bool testNum(char[], int);

int main()
{
    const int SIZE = 8;
    char customer[SIZE];

    cout << "Enter a customer number in the form LLLNNNN\n";
    cout << "(LLL = letters and NNNN = numbers): ";
    cin.getline(customer, SIZE);

    if (testNum(customer, SIZE))
        cout << "Valid customer number\n";
    else
    {
        cout << "Invalid customer number\n";
        cout << "The customer number must be in the form LLLNNNN\n";
        cout << "(LLL = letters and NNNN = numbers)\n";
    }

    return 0;
}

bool testNum(char custNum[], int size)
{
    int count;

    for (count = 0; count < 3; count++)
    {
        if (!isalpha(custNum[count]))
            return false;
    }

    for (count = 3; count < size - 1; count++)
    {
        if (!isdigit(custNum[count]))
            return false;
    }

    return true;
}