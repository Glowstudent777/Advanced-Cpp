#include <iostream>
#include <vector>
#include "Product.h"

using namespace std;

int main()
{
    vector<Product> prods;

    prods.emplace_back("T-Shirt", 20);
    prods.emplace_back("Calendar", 25);
    prods.emplace_back("Coffee Mug", 30);

    for (auto it = prods.begin(); it != prods.end(); it++)
    {
        cout << "Product: " << it->getName() << "\nUnits: " << it->getUnits() << endl
             << endl;
    }

    return 0;
}