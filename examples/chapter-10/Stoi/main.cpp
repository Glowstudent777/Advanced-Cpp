#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main()
{
    string input;
    int total = 0, count = 0;
    double average;

    cout << "This program will average a series of numbers.\n";
    cout << "Enter the first number or Q to quit: ";
    getline(cin, input);

    while (tolower(input[0]) != 'q')
    {
        total += stoi(input);
        count++;

        cout << "Enter the next number or Q to quit: ";
        getline(cin, input);
    }

    if (count != 0)
    {
        average = static_cast<double>(total) / count;
        cout << "You entered " << count << " numbers.\n";
        cout << "The average of the numbers is " << average << endl;
    }
    else
        cout << "No numbers were entered.\n";

    return 0;
}