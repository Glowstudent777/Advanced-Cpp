/*****
 * Author: Glowstudent
 * Program: Word Counter - C-String
 *****/

#include <iostream>

using namespace std;

int wordCounter(const char *);

int main()
{
    const int SIZE = 101;
    char userString[SIZE];

    cout << "Enter a string of no more than " << (SIZE - 1) << " characters: ";
    cin.getline(userString, SIZE);

    cout << "The string you entered contains " << wordCounter(userString) << " words.\n";

    return 0;
}

int wordCounter(const char *str)
{
    int count = 0;

    while (*str != '\0')
    {
        while (*str == ' ')
            str++;
        if (*str != '\0')
            count++;
        while (*str != ' ' && *str != '\0')
            str++;
    }

    return count;
}