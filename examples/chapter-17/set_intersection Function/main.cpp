#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main()
{
    set<int> set1 = {1, 2, 3, 4};
    set<int> set2 = {3, 4, 5, 6};

    vector<int> result(set1.size() + set2.size());

    auto it = set_intersection(set1.begin(), set1.end(), set2.begin(), set2.end(), result.begin());
    result.resize(it - result.begin());

    cout << "Intersection of set1 and set2: ";
    for (auto elem : result)
        cout << elem << " ";
    cout << endl;

    return 0;
}