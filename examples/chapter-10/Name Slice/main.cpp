#include <iostream>

using namespace std;

void nameSlice(char[]);

int main()
{
    const int SIZE = 41;
    char name[SIZE];

    cout << "Enter your first and last name separated by a space: ";
    cin.getline(name, SIZE);

    nameSlice(name);

    cout << "Your first name is: " << name << endl;

    return 0;
}

void nameSlice(char n[])
{
    int c = 0;

    while (n[c] != ' ' && n[c] != '\0')
        c++;

    if (n[c] == ' ')
        n[c] = '\0';
}