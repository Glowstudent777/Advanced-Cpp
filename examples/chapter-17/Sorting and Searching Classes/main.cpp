#include <iostream>
#include <vector>
#include <algorithm>
#include "Customer.h"

using namespace std;

int main()
{
    int searchValue;

    vector<Customer> customers =
        {Customer(1003, "Megan Cruz"),
         Customer(1001, "Sarah Scott"),
         Customer(1002, "Austin Hill")};

    sort(customers.begin(), customers.end());

    cout << "Sorted Customers:\n";
    for (auto e : customers)
        cout << e.getCustNumber() << "\t" << e.getName() << endl;

    cout << endl;

    cout << "Enter a customer ID to search for: ";
    cin >> searchValue;

    if (binary_search(customers.begin(), customers.end(), Customer(searchValue, "")))
        cout << "That customer is in the vector." << endl;
    else
        cout << "That customer is not in the vector." << endl;

    return 0;
}