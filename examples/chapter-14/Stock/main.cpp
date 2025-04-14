#include <iostream>
#include <iomanip>
#include "Stock.h"
#include "StockPurchase.h"

using namespace std;

int main()
{
    int sharesToBuy;
    Stock xyzCompany("XYZ", 9.62);

    cout << setprecision(2) << fixed << showpoint;
    cout << "XYZ Company's trading symbol is " << xyzCompany.getSymbol() << endl;
    cout << "The share price is $" << xyzCompany.getSharePrice() << endl
         << endl;
    cout << "How many shares do you want to buy? ";
    cin >> sharesToBuy;

    StockPurchase buy(xyzCompany, sharesToBuy);

    cout << "The cost of the purchase is $"
         << buy.getCost() << endl;

    return 0;
}