#include <iostream>
#include <string>
#include "Dealer.h"
#include "Player.h"

using namespace std;

void roundResults(Dealer &, Player &, Player &);
void checkGuess(Player &, Dealer &);
void displayGrandWinnder(Player, Player);

int main()
{
    const int MAX_ROUNDS = 5;
    string player1Name, player2Name;

    cout << "Enter the first player's name: ";
    cin >> player1Name;

    cout << "Enter the second player's name: ";
    cin >> player2Name;

    Dealer dealer;

    Player player1(player1Name);
    Player player2(player2Name);

    for (int round = 0; round < MAX_ROUNDS; round++)
    {
        cout << "----------------------------\n";
        cout << "Now playing round " << (round + 1) << endl;

        dealer.rollDice();

        player1.makeGuess();
        player2.makeGuess();

        roundResults(dealer, player1, player2);
    }

    displayGrandWinnder(player1, player2);
    return 0;
}

void roundResults(Dealer &dealer, Player &player1, Player &player2)
{
    cout << "The dealer rolled a " << dealer.getDie1Value() << " and a "
         << dealer.getDie2Value() << endl;

    cout << "Result: " << dealer.getChoOrHan() << endl;

    checkGuess(player1, dealer);
    checkGuess(player2, dealer);
}

void checkGuess(Player &player, Dealer &dealer)
{
    const int POINTS_TO_ADD = 1;

    string guess = player.getGuess();

    string choHanResult = dealer.getChoOrHan();

    cout << "The player " << player.getName() << " guessed " << guess << endl;

    if (guess == choHanResult)
    {
        player.addPoints(POINTS_TO_ADD);
        cout << "Awarding " << POINTS_TO_ADD << " point(s) to " << player.getName() << endl;
    }
}

void displayGrandWinnder(Player player1, Player player2)
{
    cout << "----------------------------\n";
    cout << "Game over. Here are the results:\n";
    cout << player1.getName() << " has " << player1.getPoints() << " points.\n";
    cout << player2.getName() << " has " << player2.getPoints() << " points.\n";

    if (player1.getPoints() > player2.getPoints())
    {
        cout << player1.getName() << " is the grand winner!\n";
    }
    else if (player2.getPoints() > player1.getPoints())
    {
        cout << player2.getName() << " is the grand winner!\n";
    }
    else
    {
        cout << "It's a tie!\n";
    }
}