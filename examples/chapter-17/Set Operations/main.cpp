#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <string>

using namespace std;

void displaySet(set<string> s);
void displayIntersection(set<string> s1, set<string> s2);
void displayUnion(set<string> s1, set<string> s2);
void displayDifference(set<string> s1, set<string> s2);
void displaySymmetricDifference(set<string> s1, set<string> s2);

int main()
{
    set<string> baseball = {"Jodi", "Carmen", "Aida", "Alicia"};
    set<string> basketball = {"Eva", "Carmen", "Alicia", "Sarah"};

    cout << "The following students are on the baseball team: " << endl;
    displaySet(baseball);

    cout << "\n\nThe following students are on the basketball team: " << endl;
    displaySet(basketball);

    cout << "\n\nThe following students are on both teams: " << endl;
    displayIntersection(baseball, basketball);

    cout << "\n\nThe following students are on either team: " << endl;
    displayUnion(baseball, basketball);

    cout << "\n\nThe following students are on the baseball team but not on the basketball team: " << endl;
    displayDifference(baseball, basketball);

    cout << "\n\nThe following students are on the basketball team but not on the baseball team: " << endl;
    displayDifference(basketball, baseball);

    cout << "\n\nThe following students are on either team but not both: " << endl;
    displaySymmetricDifference(baseball, basketball);

    return 0;
}

void displaySet(set<string> s)
{
    for (auto name : s)
        cout << name << " ";
    cout << endl;
}

void displayIntersection(set<string> s1, set<string> s2)
{
    vector<string> result(s1.size() + s2.size());

    auto it = set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), result.begin());
    result.resize(it - result.begin());

    for (auto name : result)
        cout << name << " ";
    cout << endl;
}

void displayUnion(set<string> s1, set<string> s2)
{
    vector<string> result(s1.size() + s2.size());

    auto it = set_union(s1.begin(), s1.end(), s2.begin(), s2.end(), result.begin());
    result.resize(it - result.begin());

    for (auto name : result)
        cout << name << " ";
    cout << endl;
}

void displayDifference(set<string> s1, set<string> s2)
{
    vector<string> result(s1.size() + s2.size());

    auto it = set_difference(s1.begin(), s1.end(), s2.begin(), s2.end(), result.begin());
    result.resize(it - result.begin());

    for (auto name : result)
        cout << name << " ";
    cout << endl;
}

void displaySymmetricDifference(set<string> s1, set<string> s2)
{
    vector<string> result(s1.size() + s2.size());

    auto it = set_symmetric_difference(s1.begin(), s1.end(), s2.begin(), s2.end(), result.begin());
    result.resize(it - result.begin());

    for (auto name : result)
        cout << name << " ";
    cout << endl;
}