/*****
 * Author: Glowstudent
 * Program: Reverse Array
 *****/

#include <iostream>
#include <limits>
#include <memory>

using namespace std;

int *reverseArray(const int *, int);

int main()
{
    const int size = 5;
    int *arr = new int[size];

    cout << "Enter " << size << " integers to reverse:\n";

    for (int i = 0; i < size; i++)
    {
        cout << "Enter integer " << i + 1 << ": ";
        cin >> arr[i];
    }

    int *reverseArr = reverseArray(arr, size);

    cout << "Original array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\nReversed array: ";
    for (int i = 0; i < size; i++)
    {
        cout << reverseArr[i] << " ";
    }

    return 0;
}

int *reverseArray(const int *arr, int size)
{
    int *reverseArr = new int[size];

    for (int i = 0; i < size; i++)
    {
        reverseArr[i] = arr[size - 1 - i];
    }

    return reverseArr;
}