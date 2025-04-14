#ifndef INTARRAY_H
#define INTARRAY_H

class IntArray
{
private:
    int *aptr;
    int arraySize;
    void subscriptError();

public:
    IntArray(int);
    IntArray(const IntArray &);
    ~IntArray();

    int size() const { return arraySize; }

    const IntArray operator=(const IntArray &);
    int &operator[](const int &);
};

#endif