#include <iostream>
#include <memory>

using namespace std;

int main()
{
    int max;

    cout << "How many integers do you want to store? ";
    cin >> max;

    unique_ptr<int[]> ptr(new int[max]);

    for (int i = 0; i < max; i++)
    {
        cout << "Enter an integer: ";
        cin >> ptr[i];
    }

    cout << "You entered: ";
    for (int i = 0; i < max; i++)
    {
        cout << ptr[i] << " ";
    }

    return 0;
}