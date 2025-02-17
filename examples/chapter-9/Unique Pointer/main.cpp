#include <iostream>
#include <memory>

using namespace std;

int main()
{
    unique_ptr<int> ptr(new int);

    *ptr = 99;

    cout << "Value of ptr: " << *ptr << endl;

    return 0;
}