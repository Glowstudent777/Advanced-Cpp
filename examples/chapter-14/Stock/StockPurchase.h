#ifndef STOCK_PURCHASE_H
#define STOCK_PURCHASE_H

#include "Stock.h"

class StockPurchase
{
private:
    Stock stock;
    int shares;

public:
    StockPurchase()
    {
        shares = 0;
    }

    StockPurchase(const Stock &s, int sh)
    {
        stock = s;
        shares = sh;
    }

    double getCost() const
    {
        return stock.getSharePrice() * shares;
    }
};

#endif