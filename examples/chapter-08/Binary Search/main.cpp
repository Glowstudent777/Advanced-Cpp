#include <iostream>
using namespace std;

// Search function prototype
int binarySearch(int[], int, int);
const int SIZE = 16;

int main()
{
    int found, value;

    int array[] = {34, 19, 19, 18, 17, 13, 12, 12, 12, 11, 9, 5, 3, 2, 2, 0};
    // array to be searched

    cout << "Enter an integer to search for:" << endl;
    cin >> value;

    found = binarySearch(array, SIZE, value);
    // function call to perform the binary search
    // on array looking for an occurrence of value

    if (found == -1)
        cout << "The value " << value << " is not in the list" << endl;
    else
        cout << "The value " << value << " is in position number "
             << found + 1 << " of the list" << endl;

    return 0;
}

int binarySearch(int array[], int numElems, int value)
{
    // First element
    int first = 0;
    // last element
    int last = numElems - 1;
    // variable containing the present middle value
    int middle;

    while (first <= last)
    {
        middle = first + (last - first) / 2;

        if (array[middle] == value)
            return middle; // if value is in the middle, done

        else if (array[middle] < value)
            last = middle - 1; // toss out the second remaining half of

        else
            first = middle + 1; // toss out the first remaining half of
                                // the array and search the second
    }

    return -1; // indicates that value is not in the array
}