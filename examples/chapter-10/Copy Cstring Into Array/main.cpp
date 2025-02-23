#include <iostream>

using namespace std;

void stringCopy(char[], char[]);

int main()
{
    const int LENGTH = 30;
    char first[LENGTH], second[LENGTH];

    cout << "Enter a string with no more than " << (LENGTH - 1) << " characters:\n";
    cin.getline(first, LENGTH);

    stringCopy(first, second);

    cout << "The string you entered is:\n"
         << second << endl;

    return 0;
}

void stringCopy(char str1[], char str2[])
{
    int index = 0;

    while (str1[index] != '\0')
    {
        str2[index] = str1[index];
        index++;
    }

    str2[index] = '\0';
}