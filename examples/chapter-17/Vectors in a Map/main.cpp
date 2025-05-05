#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<int> student1Scores = {88, 92, 100};
    vector<int> student2Scores = {95, 74, 81};
    vector<int> student3Scores = {72, 88, 91};
    vector<int> student4Scores = {70, 75, 78};

    map<string, vector<int>> tests;
    tests["Kayla"] = student1Scores;
    tests["Luis"] = student2Scores;
    tests["Sophie"] = student3Scores;
    tests["Ethen"] = student4Scores;

    for (auto e : tests)
    {
        cout << "Student: " << e.first << endl;
        for (int i = 0; i < e.second.size(); i++)
        {
            cout << "\t" << e.second[i] << endl;
        }
    }
}