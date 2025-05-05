#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool outOfRange(int);

int main()
{
    vector<int> numbers = {0, 99, 120, -33, 10, 8, -1, 101};
    int invalid = count_if(numbers.begin(), numbers.end(), outOfRange);

    cout << "There are " << invalid << " elements out of range." << endl;

    return 0;
}

bool outOfRange(int n)
{
    const int MIN = 0, MAX = 100;
    bool status;

    if (n < MIN || n > MAX)
        status = true;
    else
        status = false;

    return status;
}