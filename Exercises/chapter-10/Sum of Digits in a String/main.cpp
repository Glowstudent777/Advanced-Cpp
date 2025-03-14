/*****
 * Author: Glowstudent
 * Program: Sum of Digits in a String
 *****/

#include <iostream>
#include <cctype>
#include <string>

using namespace std;

// Lovely struct to hold the data
struct Data
{
    int total;
    int highest;
    int lowest;
};

Data countDigits(char *);
void getUserString(char *, const int);

int main()
{
    const int SIZE = 101;
    char userString[SIZE];

    getUserString(userString, SIZE);

    Data result = countDigits(userString);

    cout << "The sum of the digits in the string is: " << result.total << endl;
    cout << "The highest digit in the string is: " << result.highest << endl;
    cout << "The lowest digit in the string is: " << result.lowest << endl;

    return 0;
}

Data countDigits(char *str)
{
    int c = 0, highest = 0, lowest = 9;

    while (*str != '\0')
    {
        if (isdigit(*str))
        {
            c += (*str - '0');
            if (*str - '0' > highest)
                highest = *str - '0';
            if (*str - '0' < lowest)
                lowest = *str - '0';
        }
        str++;
    }

    return {c, highest, lowest};
}

void getUserString(char *str, const int SIZE)
{
    cout << "Enter a string of no more than " << (SIZE - 1) << " characters: ";
    cin.getline(str, SIZE);
}