#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8};
    auto isEven = [](int x)
    { return x % 2 == 0; };

    int evenNums = count_if(v.begin(), v.end(), isEven);

    cout << "Number of even numbers: " << evenNums << endl;

    return 0;
}