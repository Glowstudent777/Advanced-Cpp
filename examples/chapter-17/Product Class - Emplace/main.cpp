#include <iostream>
#include <vector>
#include "Product.h"

using namespace std;

int main()
{
    vector<Product> prods = {
        Product("T-Shirt", 20),
        Product("Coffee Mug", 30),
    };

    auto it = prods.begin() + 1;
    prods.emplace(it, "Calendar", 25);

    for (auto it = prods.begin(); it != prods.end(); it++)
    {
        cout << "Product: " << it->getName() << "\nUnits: " << it->getUnits() << endl
             << endl;
    }

    return 0;
}