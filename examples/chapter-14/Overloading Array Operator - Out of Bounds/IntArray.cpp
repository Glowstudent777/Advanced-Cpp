#include <iostream>
#include <cstdlib>
#include "IntArray.h"

using namespace std;

IntArray::IntArray(int s)
{
    arraySize = s;
    aptr = new int[arraySize];
    for (int i = 0; i < arraySize; i++)
        *(aptr + i) = 0;
}

IntArray::IntArray(const IntArray &obj)
{
    arraySize = obj.arraySize;
    aptr = new int[arraySize];
    for (int i = 0; i < arraySize; i++)
        *(aptr + i) = *(obj.aptr + i);
}

IntArray::~IntArray()
{
    if (arraySize > 0)
        delete[] aptr;
}

void IntArray::subscriptError()
{
    cout << "ERROR: Subscript out of range.\n";
    exit(0);
}

const IntArray IntArray::operator=(const IntArray &right)
{
    if (this != &right)
    {
        delete[] aptr;
        arraySize = right.arraySize;
        aptr = new int[arraySize];
        for (int i = 0; i < arraySize; i++)
            *(aptr + i) = *(right.aptr + i);
    }
    return *this;
}

int &IntArray::operator[](const int &sub)
{
    if (sub < 0 || sub >= arraySize)
        subscriptError();
    return aptr[sub];
}