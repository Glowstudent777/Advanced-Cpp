#include <iostream>
#include <vector>
#include "Product.h"

using namespace std;

int main()
{
    Product prod1("T-Shirt", 20), prod2("Calendar", 25), prod3("Coffee Mug", 30);
    vector<Product> prods;

    prods.push_back(prod1);
    prods.push_back(prod2);
    prods.push_back(prod3);

    for (auto it = prods.begin(); it != prods.end(); it++)
    {
        cout << "Product: " << it->getName() << "\nUnits: " << it->getUnits() << endl
             << endl;
    }

    return 0;
}