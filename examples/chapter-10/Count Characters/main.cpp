#include <iostream>

using namespace std;

int countChars(char *, char);

int main()
{
    const int SIZE = 51;
    char userString[SIZE];
    char letter;

    cout << "Enter a string of no more than " << (SIZE - 1) << " characters: ";
    cin.getline(userString, SIZE);

    cout << "Enter a character and I will tell you how many times it appears in the string: ";
    cin >> letter;

    cout << "The character " << letter << " appears " << countChars(userString, letter) << " times in the string.\n";

    return 0;
}

int countChars(char *strPtr, char ch)
{
    int c = 0;

    while (*strPtr != '\0')
    {
        if (*strPtr == ch)
            c++;
        strPtr++;
    }

    return c;
}