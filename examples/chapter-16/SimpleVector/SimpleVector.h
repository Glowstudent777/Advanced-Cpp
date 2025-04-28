#ifndef SIMPLEVECTOR_H
#define SIMPLEVECTOR_H

#include <iostream>
#include <new>
#include <cstdlib>

template <class T>
class SimpleVector
{
    T *aptr;
    int arraySize;
    void memError();
    void subError();

public:
    SimpleVector()
    {
        aptr = 0;
        arraySize = 0;
    }

    SimpleVector(int s);
    SimpleVector(const SimpleVector &);
    ~SimpleVector();

    int size() const
    {
        return arraySize;
    }

    T getElementAt(int pos);

    T &operator[](const int &i);
};

template <class T>
SimpleVector<T>::SimpleVector(int s)
{
    arraySize = s;
    try
    {
        aptr = new T[s];
    }
    catch (std::bad_alloc)
    {
        memError();
    }

    for (int count = 0; count < arraySize; count++)
        *(aptr + count) = 0;
}

template <class T>
SimpleVector<T>::SimpleVector(const SimpleVector &obj)
{
    arraySize = obj.arraySize;

    aptr = new T[arraySize];
    if (aptr == 0)
        memError();

    for (int count = 0; count < arraySize; count++)
        *(aptr + count) = *(obj.aptr + count);
}

template <class T>
SimpleVector<T>::~SimpleVector()
{
    if (arraySize > 0)
        delete[] aptr;
}

template <class T>
void SimpleVector<T>::memError()
{
    std::cout << "ERROR: Cannot allocate memory.\n";
    exit(EXIT_FAILURE);
}

template <class T>
void SimpleVector<T>::subError()
{
    std::cout << "ERROR: Subscript out of range.\n";
    exit(EXIT_FAILURE);
}

template <class T>
T SimpleVector<T>::getElementAt(int pos)
{
    if (pos < 0 || pos >= arraySize)
        subError();

    return aptr[pos];
}

template <class T>
T &SimpleVector<T>::operator[](const int &i)
{
    if (i < 0 || i >= arraySize)
        subError();

    return aptr[i];
}

#endif