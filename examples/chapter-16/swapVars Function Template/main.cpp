#include <iostream>

using namespace std;

template <typename T>
void swapVars(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    char cA, cB;
    int iA, iB;
    double dA, dB;

    cout << "Enter two characters: ";
    cin >> cA >> cB;
    swapVars(cA, cB);
    cout << "After swapping: " << cA << " " << cB << endl;

    cout << "Enter two integers: ";
    cin >> iA >> iB;
    swapVars(iA, iB);
    cout << "After swapping: " << iA << " " << iB << endl;

    cout << "Enter two doubles: ";
    cin >> dA >> dB;
    swapVars(dA, dB);
    cout << "After swapping: " << dA << " " << dB << endl;

    return 0;
}