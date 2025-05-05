#include <iostream>
#include "Sum.h"

using namespace std;

int main()
{
    int x = 10, y = 2, z = 0;
    Sum sum;

    z = sum(x, y);

    cout << "The sum of " << x << " and " << y << " is: " << z << endl;

    return 0;
}