#include <iostream>
#include <iomanip>
#include "Sale.h"

using namespace std;

int main()
{
     double cost;

     cout << "Enter the cost of the item: $";
     cin >> cost;

     Sale itemSale(cost);

     cout << fixed << setprecision(2);

     cout << "The amount of sales tax is: $"
          << itemSale.getTax() << endl;

     cout << "The total cost of the item is: $"
          << itemSale.getTotal() << endl;
}