
#ifndef STOCK_H
#define STOCK_H

#include <string>

class Stock
{
private:
    std::string symbol;
    double sharePrice;

public:
    Stock()
    {
        set("", 0.0);
    }

    Stock(std::string s, double p)
    {
        set(s, p);
    }

    Stock(const Stock &s)
    {
        set(s.symbol, s.sharePrice);
    }

    void set(std::string s, double p)
    {
        symbol = s;
        sharePrice = p;
    }

    std::string getSymbol() const
    {
        return symbol;
    }

    double getSharePrice() const
    {
        return sharePrice;
    }
};

#endif