/*****
 * Author: Glowstudent
 * Program: isPrime Function
 *****/

#include <iostream>
#include <limits>

using namespace std;

void getNum(int &num)
{
    cout << "Enter a number: ";
    cin >> num;

    while (cin.fail())
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << endl;
        cout << "Invalid input. Please enter a real number." << endl;
        cout << "Enter a number: ";
        cin >> num;
    }
}

bool isPrime(int &num)
{
    int count = 0;

    if (num <= 1)
        return false;

    for (int i = 2; i < num; i++)
        if (num % i == 0)
            count++;

    if (count == 0)
        return true;
    else
        return false;
}

int main()
{
    int num;

    getNum(num);

    if (isPrime(num))
        cout << num << " is a prime number." << endl;
    else
        cout << num << " is not a prime number." << endl;

    return 0;
}