#include <iostream>
#include <vector>
#include "Product.h"

using namespace std;

int main()
{
    vector<Product> prods = {
        Product("T-Shirt", 20),
        Product("Calendar", 25),
        Product("Coffee Mug", 30),
    };

    for (auto e : prods)
    {
        cout << "Product: " << e.getName() << "\nUnits: " << e.getUnits() << endl
             << endl;
    }

    return 0;
}