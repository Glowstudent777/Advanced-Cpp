#include <iostream>
#include <map>
#include <string>
#include "Customer.h"

using namespace std;

int main()
{
    map<Customer, string> assignments =
        {{Customer(1001, "Sarah Scott"), "1A"},
         {Customer(1002, "Austin Hill"), "2B"},
         {Customer(1003, "Megan Cruz"), "3C"}};

    for (auto e : assignments)
    {
        cout << e.first.getName() << "\t" << e.second << endl;
    }

    return 0;
}