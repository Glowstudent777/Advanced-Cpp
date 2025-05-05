#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

int main()
{
    vector<int> v = {8, 1, 7, 2, 6, 3, 5, 4};

    cout << "Original vector: ";
    for (auto elem : v)
        cout << elem << " ";
    cout << endl;

    sort(v.begin(), v.end());
    cout << "\nAscending sort: ";
    for (auto elem : v)
        cout << elem << " ";
    cout << endl;

    sort(v.begin(), v.end(), greater<int>());
    cout << "\nDescending sort: ";
    for (auto elem : v)
        cout << elem << " ";
    cout << endl;

    return 0;
}