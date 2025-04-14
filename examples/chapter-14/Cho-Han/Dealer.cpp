#include "Dealer.h"
#include "Die.h"
#include <string>

Dealer::Dealer()
{
    die1Value = 0;
    die2Value = 0;
}

void Dealer::rollDice()
{
    die1.roll();
    die2.roll();
    die1Value = die1.getValue();
    die2Value = die2.getValue();
}

std::string Dealer::getChoOrHan()
{
    std::string result;

    int sum = die1Value + die2Value;

    if (sum % 2 == 0)
        result = "Cho (even)";
    else
        result = "Han (odd)";

    return result;
}

int Dealer::getDie1Value()
{
    return die1Value;
}

int Dealer::getDie2Value()
{
    return die2Value;
}