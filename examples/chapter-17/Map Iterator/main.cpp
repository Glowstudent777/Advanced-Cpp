#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    map<int, string> employees = {
        {101, "Chris Jones"}, {102, "Jessica Smith"}, {103, "Amanda Stevens"}, {104, "Will Osborn"}};

    map<int, string>::iterator iter;

    for (iter = employees.begin(); iter != employees.end(); iter++)
    {
        cout << "Employee ID: " << iter->first << "\nName: " << iter->second << endl
             << endl;
    }

    return 0;
};