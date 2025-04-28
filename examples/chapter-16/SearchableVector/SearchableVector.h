#ifndef SEARCHABLEVECTOR_H
#define SEARCHABLEVECTOR_H

#include "SimpleVector.h"

template <class T>
class SearchableVector : public SimpleVector<T>
{
public:
    SearchableVector() : SimpleVector<T>() {}

    SearchableVector(int s) : SimpleVector<T>(s) {}

    SearchableVector(const SearchableVector &obj);

    int findItem(const T);
};

template <class T>
SearchableVector<T>::SearchableVector(const SearchableVector &obj) : SimpleVector<T>(obj.size())
{
    for (int count = 0; count < this->size(); count++)
        this->operator[](count) = obj[count];
}

template <class T>
int SearchableVector<T>::findItem(const T item)
{
    for (int count = 0; count < this->size(); count++)
    {
        if (this->operator[](count) == item)
            return count;
    }
    return -1;
}

#endif