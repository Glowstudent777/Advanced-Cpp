#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v1 = {1, 2, 3};
    vector<int> v2 = {100, 200, 300, 400, 500};

    auto it1 = v1.begin() + 1;
    auto it2 = v2.begin();
    auto it3 = v2.begin() + 3;

    v1.insert(it1, it2, it3);

    for (auto e : v1)
        cout << e << " ";

    return 0;
}