#ifndef SORTINGALGS_H
#define SORTINGALGS_H

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

template <typename T, typename Y>
void dualSort(T arr1[], Y arr2[], int size, SortOrder order = SortOrder::Ascending)
{
    T temp;
    Y maxValue;
    int maxIndex;

    for (int start = 0; start < (size - 1); start++)
    {
        maxIndex = start;
        maxValue = arr2[maxIndex];
        temp = arr1[start];

        for (int i = start + 1; i < size; i++)
        {
            if (arr2[i] > maxValue)
            {
                maxValue = arr2[i];
                temp = arr1[i];
                maxIndex = i;
            }
        }

        swap(arr1[maxIndex], arr1[start]);
        swap(arr2[maxIndex], arr2[start]);
    }
}

#endif
