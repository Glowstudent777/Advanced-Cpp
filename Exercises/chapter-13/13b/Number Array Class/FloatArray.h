#ifndef FLOATARR_H
#define FLOATARR_H

class FloatArray
{
private:
    float *arr;
    int size;

public:
    FloatArray(int s)
    {
        size = s;
        arr = new float[size];

        for (int i = 0; i < size; ++i)
            arr[i] = 0.0f;
    }

    ~FloatArray()
    {
        delete[] arr;
    }

    void setValue(int index, float value)
    {
        if (index >= 0 && index < size)
            arr[index] = value;
        else
            throw "Index out of bounds";
    }

    float getValue(int index) const
    {
        if (index >= 0 && index < size)
            return arr[index];
        else
            throw "Index out of bounds";
    }

    float getMax() const
    {
        float max = arr[0];
        for (int i = 1; i < size; ++i)
            if (arr[i] > max)
                max = arr[i];
        return max;
    }

    float getMin() const
    {
        float min = arr[0];
        for (int i = 1; i < size; ++i)
            if (arr[i] < min)
                min = arr[i];
        return min;
    }

    float getAverage() const
    {
        float sum = 0.0f;
        for (int i = 0; i < size; ++i)
            sum += arr[i];
        return sum / size;
    }
};

#endif