#include <iostream>
#include <algorithm>
#include <vector>
#include "IsEven.h"

using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8};

    int evenNums = count_if(v.begin(), v.end(), IsEven());

    cout << "The number of even numbers in the vector is: " << evenNums << endl;

    return 0;
}