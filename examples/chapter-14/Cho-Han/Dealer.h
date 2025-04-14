#ifndef DEALER_H
#define DEALER_H

#include <string>
#include "Die.h"

class Dealer
{
private:
    Die die1;
    Die die2;
    int die1Value;
    int die2Value;

public:
    Dealer();
    void rollDice();
    std::string getChoOrHan();
    int getDie1Value();
    int getDie2Value();
};

#endif