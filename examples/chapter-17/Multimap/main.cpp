#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    multimap<string, string> phonebook =
        {{"Will", "555-1212"},
         {"Will", "555-0123"},
         {"Faye", "555-0707"},
         {"Faye", "555-1234"},
         {"Sarah", "555-8787"},
         {"Sarah", "555-5678"}};

    for (auto e : phonebook)
    {
        cout << e.first << "\t" << e.second << endl;
    }

    return 0;
}