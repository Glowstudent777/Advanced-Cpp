#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

int main()
{
    // Just simplified the creation of the vectors
    map<string, vector<int>> tests =
        {
            {"Kayla", vector<int>{88, 92, 100}},
            {"Luis", vector<int>{95, 74, 81}},
            {"Sophie", vector<int>{72, 88, 91}},
            {"Ethen", vector<int>{70, 75, 78}}};

    for (auto e : tests)
    {
        cout << "Student: " << e.first << endl;
        for (int i = 0; i < e.second.size(); i++)
        {
            cout << "\t" << e.second[i] << endl;
        }
    }
}