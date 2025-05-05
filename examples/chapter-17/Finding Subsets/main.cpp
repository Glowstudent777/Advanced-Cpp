#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main()
{
    set<int> set1 = {1, 2, 3, 4};
    set<int> set2 = {2, 3};

    if (includes(set1.begin(), set1.end(), set2.begin(), set2.end()))
    {
        cout << "set2 is a subset of set1" << endl;
    }
    else
    {
        cout << "set2 is not a subset of set1" << endl;
    }

    return 0;
}