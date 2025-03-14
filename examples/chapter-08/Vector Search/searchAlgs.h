#ifndef SEARCHALGS_H
#define SEARCHALGS_H

#include <vector>

template <typename T>
int binarySearch(const T arr[], int size, T value)
{
    int first = 0, last = size - 1, middle;

    while (first <= last)
    {
        middle = first + (last - first) / 2;

        if (arr[middle] == value)
            return middle;

        else if (arr[middle] > value)
            last = middle - 1;

        else
            first = middle + 1;
    }

    return -1;
}

template <typename T>
int binarySearch(const std::vector<T> &v, T value)
{
    int first = 0, last = (v.size() - 1), middle;

    while (first <= last)
    {
        middle = first + (last - first) / 2;

        if (v[middle] == value)
            return middle;

        else if (v[middle] > value)
            last = middle - 1;

        else
            first = middle + 1;
    }

    return -1;
}

template <typename T>
int linearSearch(const T arr[], int size, T value)
{
    for (int i = 0; i <= size; i++)
    {
        if (arr[i] == value)
            return i;
    }

    return -1;
}

#endif
