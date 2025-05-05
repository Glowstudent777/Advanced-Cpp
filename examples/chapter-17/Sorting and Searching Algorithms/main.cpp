#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int searchValue;

    vector<int> nums = {10, 1, 9, 2, 8, 3, 7, 4, 6, 5};

    sort(nums.begin(), nums.end());

    cout << "Sorted numbers: ";
    for (auto e : nums)
        cout << e << " ";

    cout << endl;

    cout << "Enter a number to search for: ";
    cin >> searchValue;

    if (binary_search(nums.begin(), nums.end(), searchValue))
        cout << "That value is in the vector." << endl;
    else
        cout << "That value is not in the vector." << endl;

    return 0;
}