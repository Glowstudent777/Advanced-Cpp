#include <iostream>
using namespace std;

int searchList(char[], int, char); // function prototype

const int SIZE = 16;

int main()
{
    char word[SIZE] = "uncopyrightable";
    int found;
    char ch;

    cout << "Enter a letter to search for:" << endl;
    cin >> ch;

    found = searchList(word, SIZE, ch);

    if (found == -1)
        cout << "The letter " << ch
             << " was not found in the list" << endl;
    else
        cout << "The letter " << ch << " is in element " << found + 1
             << " of the word. " << endl;

    return 0;
}

int searchList(char List[], int numElems, char value)
{
    for (int count = 0; count <= numElems; count++)
    {
        if (List[count] == value)
            // each array entry is checked to see if it contains
            // the search char.
            return count;
        // if the char is found, the array subscript
        // count is returned to indicate the location in the array
    }

    return -1; // if the value is not found, -1 is returned
}