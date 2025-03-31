#include <iostream>
#include "Die.h"

using namespace std;

int main()
{
    const int DIE1_SIDES = 6;
    const int DIE2_SIDES = 12;
    const int MAX_ROLLS = 5;

    Die die1(DIE1_SIDES);
    Die die2(DIE2_SIDES);

    cout << "This simulates rolling a " << die1.getSides() << "-sided die and a "
         << die2.getSides() << "-sided die." << endl;

    cout << "Initial value of the dice: " << die1.getValue() << " and " << die2.getValue() << endl;

    cout << "Rolling the dice " << MAX_ROLLS << " times..." << endl;

    for (int count = 1; count < MAX_ROLLS; count++)
    {
        die1.roll();
        die2.roll();

        cout << "Roll " << count << ": " << die1.getValue() << " and " << die2.getValue() << endl;
    }

    return 0;
}