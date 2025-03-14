#ifndef SORTINGALGS_H
#define SORTINGALGS_H

#include <vector>

enum class SortOrder
{
    Ascending,
    Descending
};

template <typename T>
void swap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

template <typename T>
void bubbleSort(T arr[], int size, SortOrder order = SortOrder::Ascending)
{
    int maxElement, index;

    for (maxElement = size - 1; maxElement > 0; maxElement--)
    {
        for (index = 0; index < maxElement; index++)
        {
            bool swapE = (order == SortOrder::Ascending)
                             ? (arr[index] > arr[index + 1])
                             : (arr[index] < arr[index + 1]);

            if (swapE)
                swap(arr[index], arr[index + 1]);
        };
    }
}

template <typename T>
void selectionSort(T arr[], int size, SortOrder order = SortOrder::Ascending)
{
    for (int start = 0; start < (size - 1); start++)
    {
        int selIndex = start;

        for (int i = start + 1; i < size; i++)
        {
            bool swapE = (order == SortOrder::Ascending)
                             ? (arr[i] < arr[selIndex])
                             : (arr[i] > arr[selIndex]);

            if (swapE)
                selIndex = i;
        }
        if (selIndex != start)
            swap(arr[start], arr[selIndex]);
    }
}

template <typename T>
void selectionSort(std::vector<T> &v, SortOrder order = SortOrder::Ascending)
{
    for (int start = 0; start < (v.size() - 1); start++)
    {
        int selIndex = start;

        for (int i = start + 1; i < (v.size()); i++)
        {
            bool swapE = (order == SortOrder::Ascending)
                             ? (v[i] < v[selIndex])
                             : (v[i] > v[selIndex]);

            if (swapE)
                selIndex = i;
        }
        if (selIndex != start)
            swap(v[start], v[selIndex]);
    }
}

template <typename T>
void dualSort(T arr1[], T arr2[], int size, SortOrder order = SortOrder::Ascending)
{
    for (int start = 0; start < (size - 1); start++)
    {
        int selIndex = start;

        for (int i = start + 1; i < size; i++)
        {
            bool swapE = (order == SortOrder::Ascending)
                             ? (arr1[i] < arr1[selIndex])
                             : (arr1[i] > arr1[selIndex]);

            if (swapE)
                selIndex = i;
        }
        if (selIndex != start)
        {
            swap(arr1[start], arr1[selIndex]);
            swap(arr2[start], arr2[selIndex]);
        }
    }
}

#endif