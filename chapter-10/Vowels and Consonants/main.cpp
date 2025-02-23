/*****
 * Author: Glowstudent
 * Program: Vowels and Consonants
 *****/

#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int countVowels(char *);
int countConsonants(char *);
void printMenu();
void handleChoice(char *, const int);
void getUserString(char *, const int);

int main()
{
    const int SIZE = 101;
    char userString[SIZE];

    getUserString(userString, SIZE);
    handleChoice(userString, SIZE);

    return 0;
}

int countVowels(char *str)
{
    int c = 0;

    while (*str != '\0')
    {
        if (tolower(*str) == 'a' || tolower(*str) == 'e' || tolower(*str) == 'i' || tolower(*str) == 'o' || tolower(*str) == 'u')
            c++;
        str++;
    }

    return c;
}

int countConsonants(char *str)
{
    int c = 0;

    while (*str != '\0')
    {
        if (isalpha(*str) && tolower(*str) != 'a' && tolower(*str) != 'e' && tolower(*str) != 'i' && tolower(*str) != 'o' && tolower(*str) != 'u')
            c++;
        str++;
    }

    return c;
}

void printMenu()
{
    cout << "\n===== Menu ===== \n"
         << "1. Count the number of vowels in the string\n"
         << "2. Count the number of consonants in the string\n"
         << "3. Count both the vowels and consonants in the string\n"
         << "4. Enter another string\n"
         << "5. Exit the program\n"
         << "Enter your choice: ";
}

void handleChoice(char *userString, const int SIZE)
{
    char choice;

    printMenu();
    cin >> choice;
    cin.ignore();

    while (!isdigit(choice) || (choice < '1' || choice > '5'))
    {
        cout << "Invalid input. Please enter a number between 1 and 5: ";
        cin >> choice;
        cin.ignore();
    }

    switch (choice)
    {
    case '1':
        cout << "The string you entered contains " << countVowels(userString) << " vowels.\n";
        break;
    case '2':
        cout << "The string you entered contains " << countConsonants(userString) << " consonants.\n";
        break;
    case '3':
        cout << "The string you entered contains " << countVowels(userString) << " vowels and " << countConsonants(userString) << " consonants.\n";
        break;
    case '4':
        getUserString(userString, SIZE);
        handleChoice(userString, SIZE);
        break;
    case '5':
        cout << "Exiting the program...\n";
        break;
    default:
        cout << "Invalid input. Exiting the program...\n";
        break;
    }
}

void getUserString(char *str, const int SIZE)
{
    cout << "\nEnter a string of no more than " << (SIZE - 1) << " characters: ";
    cin.getline(str, SIZE);
}