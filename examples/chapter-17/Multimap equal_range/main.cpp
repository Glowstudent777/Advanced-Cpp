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

    pair<multimap<string, string>::iterator, multimap<string, string>::iterator> range;
    multimap<string, string>::iterator it;

    range = phonebook.equal_range("Faye");

    for (it = range.first; it != range.second; it++)
    {
        cout << it->first << "\t" << it->second << endl;
    }

    return 0;
}