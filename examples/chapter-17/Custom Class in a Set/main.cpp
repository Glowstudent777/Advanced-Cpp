#include <iostream>
#include <set>
#include <string>
#include "Customer.h"

using namespace std;

int main()
{
    set<Customer> customerSet =
        {Customer(1003, "Megan Cruz"),
         Customer(1002, "Austin Hill"),
         Customer(1001, "Sarah Scott")};

    customerSet.emplace(1001, "Even Smith");

    for (auto e : customerSet)
    {
        cout << e.getCustNumber() << "\t" << e.getName() << endl;
    }

    cout << endl;
    cout << "Searching for Customer Number 1002:\n";
    auto it = customerSet.find(Customer(1002, ""));

    if (it != customerSet.end())
        cout << "Found: " << it->getName() << endl;
    else
        cout << "Not Found" << endl;

    return 0;
}