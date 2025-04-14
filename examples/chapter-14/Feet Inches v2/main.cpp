#include <iostream>
#include "FeetInches.h"

using namespace std;

int main()
{
    int count;
    FeetInches first;
    FeetInches second(1, 5);

    cout << endl;
    cout << "Prefix Increment (First | Second):" << endl;
    cout << endl;
    for (count = 0; count < 12; count++)
    {
        first = ++second;
        cout << first.getFeet() << "' " << first.getInches() << "\""
             << "\t" << second.getFeet() << "' " << second.getInches() << "\"" << endl;
    }

    cout << endl;
    cout << "Postfix Increment (First | Second):" << endl;
    cout << endl;

    for (count = 0; count < 12; count++)
    {
        first = second++;
        cout << first.getFeet() << "' " << first.getInches() << "\""
             << "\t" << second.getFeet() << "' " << second.getInches() << "\"" << endl;
    }

    return 0;
}