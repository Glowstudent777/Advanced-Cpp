/*****
 * Author: Glowstudent
 * Program: Coin Toss Simulator
 *****/

#include <iostream>
#include "Coin.h"

using namespace std;

int main()
{
    Coin coin;
    const int toss = 20;
    int heads = 0, tails = 0;

    cout << "Welcome to the Coin Toss Simulator!" << endl;
    cout << "You will toss a coin " << toss << " times." << endl;
    cout << "The starting side is: " << coin.getSideUp() << endl;
    cout << "Press Enter to start tossing the coin..." << endl;

    cin.get();
    cout << endl;

    for (int i = 0; i < toss; ++i)
    {
        coin.toss();
        cout << "Toss " << (i + 1) << ": " << coin.getSideUp() << endl;

        if (coin.getSideUp() == "Heads")
            heads++;
        else
            tails++;
    }

    cout << endl;
    cout << "Results after " << toss << " tosses:" << endl;
    cout << "Heads: " << heads << endl;
    cout << "Tails: " << tails << endl;
    cout << "Press Enter to exit..." << endl;
    cin.get();

    return 0;
}