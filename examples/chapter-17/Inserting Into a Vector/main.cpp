#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> numbers = {1, 2, 3, 4, 5};
    auto it = numbers.begin() + 1;

    numbers.insert(it, 99);

    for (auto e : numbers)
        cout << e << " ";

    return 0;
}