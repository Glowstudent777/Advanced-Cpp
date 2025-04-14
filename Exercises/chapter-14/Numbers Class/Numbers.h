#ifndef NUMBERS_H
#define NUMBERS_H

#include <string>
#include <iostream>

const int MAX = 9999;

static std::string lessThan20[20] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine",
                                     "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen",
                                     "sixteen", "seventeen", "eighteen", "nineteen"};
static std::string tens[10] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
static std::string hundred = "hundred";
static std::string thousand = "thousand";

class Numbers
{
private:
    unsigned int number;

public:
    Numbers(unsigned int n = 0)
    {
        if (n > MAX)
            throw "Number out of range";
        number = n;
    }

    void print()
    {
        if (number == 0)
            std::cout << lessThan20[0] << std::endl;
        else
        {
            while (number > 0)
            {
                if (number >= 1000)
                {
                    std::cout << lessThan20[number / 1000] << " " << thousand << " ";
                    number %= 1000;
                }
                else if (number >= 100)
                {
                    std::cout << lessThan20[number / 100] << " " << hundred << " ";
                    number %= 100;
                }
                else if (number >= 20)
                {
                    std::cout << tens[number / 10] << " ";
                    number %= 10;
                }
                else if (number > 0)
                {
                    std::cout << lessThan20[number] << " ";
                    number = 0;
                }
            }
            std::cout << std::endl;
        }
    }
};

#endif