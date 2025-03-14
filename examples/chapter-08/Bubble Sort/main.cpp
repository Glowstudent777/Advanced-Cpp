#include <iostream>
using namespace std;

// Sort & Display function prototypes
void bubbleSortArray(int[], int);
void displayArray(int[], int);

const int SIZE = 10;

int main()
{
    int values[SIZE] = {9, 2, 0, 11, 5, 22, 45, 67, 12, 1};

    cout << "The values before the bubble sort is performed are:" << endl;
    displayArray(values, SIZE);

    bubbleSortArray(values, SIZE);

    cout << "The values after the bubble sort is performed are:" << endl;
    displayArray(values, SIZE);

    return 0;
}

void displayArray(int array[], int elems) // function heading
{
    // displays the array
    for (int count = 0; count < elems; count++)
        cout << array[count] << "	" << endl;
}

void bubbleSortArray(int array[], int elems)
{
    bool swap;
    int temp;
    // bottom indicates the end part of the
    // array where the largest values have
    // settled in order
    int bottom = elems - 1;

    do
    {
        swap = false;

        for (int count = 0; count < bottom; count++)
        {
            if (array[count] > array[count + 1])
            {
                // the next three lines do a swap
                temp = array[count];
                array[count] = array[count + 1];
                array[count + 1] = temp;

                swap = true; // indicates that a swap occurred
            }
        }

        bottom--; // bottom is decremented by 1 since each pass through
                  // the array adds one more value that is set in order

    } while (swap != false);
    // loop repeats until a pass through the array with
    // no swaps occurs
}