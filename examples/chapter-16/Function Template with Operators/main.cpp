#include <iostream>

using namespace std;

template <typename T1, class T2>
int largest(T1 &a, T2 &b)
{
    if (sizeof(a) > sizeof(b))
        return sizeof(a);
    else
        return sizeof(b);
}

int main()
{
    int i = 0;
    char c = ' ';
    float f = 0.0;
    double d = 0.0;

    cout << "Comparing an int and a double, the largest is: " << largest(i, d) << " bytes" << endl;
    cout << "Comparing a char and a float, the largest is: " << largest(c, f) << " bytes" << endl;
}