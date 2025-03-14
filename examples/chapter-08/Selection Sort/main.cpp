#include <iostream>
using namespace std;

// function prototypes
void selectionSortArray(int[], int);
void displayArray(int[], int);

const int SIZE = 50;

int main()
{
    int values[SIZE] = {4, 7, 9, 13, 14, 16, 21, 22, 30, 31, 35, 40, 41, 42, 47, 52, 55, 58, 61, 64, 65, 72, 75, 84, 87, 96, 100, 101, 102, 111, 113, 117, 127, 134, 135, 137, 140, 146, 148, 150, 154, 155, 157, 162, 164, 169, 181, 182, 183, 190};

    cout << "\n\nThe values before the selection sort is performed are:" << endl;
    displayArray(values, SIZE);

    selectionSortArray(values, SIZE);

    cout << "\n\nThe values after the selection sort is performed are:" << endl;
    displayArray(values, SIZE);

    return 0;
}

void displayArray(int array[], int elems) // function heading
{
    // Displays array
    for (int count = 0; count < elems; count++)
        if (count % 5 == 0)
        {
            cout << "\n";
        }
        else
        {
            cout << array[count] << " ";
        }
    cout << endl;
}

void selectionSortArray(int array[], int elems)
{
    int seek;     // array position currently being put in order
    int minCount; // location of smallest value found
    int minValue; // holds the smallest value found

    for (seek = 0; seek < (elems - 1); seek++) // outer loop performs the swap
                                               // and then increments seek
    {
        minCount = seek;
        minValue = array[seek];

        for (int index = seek + 1; index < elems; index++)
        {
            // inner loop searches through array
            // starting at array[seek] searching
            // for the smallest value. When the
            // value is found, the subscript is
            // stored in minCount. The value is
            // stored in minValue.

            if (array[index] < minValue)
            {
                minValue = array[index];
                minCount = index;
            }
        }

        // the following two statements exchange the value of the
        // element currently needing the smallest value found in the
        // pass(indicated by seek) with the smallest value found
        // (located in minValue)

        array[minCount] = array[seek];
        array[seek] = minValue;
    }
}