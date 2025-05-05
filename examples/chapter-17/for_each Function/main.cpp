#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void doubleNumber(int &);

int main()
{
    vector<int> numbers = {1, 2, 3, 4, 5};

    for (auto e : numbers)
        cout << e << " ";
    cout << endl;

    for_each(numbers.begin(), numbers.end(), doubleNumber);

    for (auto e : numbers)
        cout << e << " ";
    cout << endl;
}

void doubleNumber(int &n)
{
    n *= 2;
}