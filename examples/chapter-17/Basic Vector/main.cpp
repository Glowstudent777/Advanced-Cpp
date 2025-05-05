#include <iostream>
#include <vector>

using namespace std;

int main()
{
    const int SIZE = 10;
    vector<int> numbers(SIZE);

    for (int i = 0; i < numbers.size(); i++)
        numbers[i] = i;

    for (auto e : numbers)
        cout << e << " ";

    return 0;
}
