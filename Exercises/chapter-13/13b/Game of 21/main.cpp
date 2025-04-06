/*****
 * Author: Glowstudent
 * Program: Game of 21
 *****/

#include <iostream>
#include "Die.h"

using namespace std;

int main()
{
    const int DIE1_SIDES = 6, DIE2_SIDES = 6;
    Die die1(DIE1_SIDES);
    Die die2(DIE2_SIDES);

    int playerScore = 0, dealerScore = 0, diceTotal = 0;
    char choice = 'y', playAgain;
    bool firstGame = true;

    cout << "Welcome to the Game of 21!" << endl;
    cout << "You will play against the dealer." << endl;
    cout << "The goal is to get as close to 21 as possible without going over." << endl;
    cout << "You will roll two dice." << endl;
    cout << "If you roll a total of 21, you win!" << endl;
    cout << "If you roll over 21, you lose!" << endl;
    cout << "If you roll under 21, you can choose to roll again or stop." << endl;
    cout << "The dealer will also roll two dice." << endl;
    cout << "If the dealer rolls over 21, you win!" << endl;
    cout << "If the dealer rolls under 21, you lose!" << endl;
    cout << "If the dealer rolls 21, you lose!" << endl;

    do
    {
        playerScore = 0;
        dealerScore = 0;
        diceTotal = 0;
        choice = 'y';

        if (!firstGame)
            cout << "\033[2J\033[1;1H";
        else
            firstGame = false;

        cout << "Let's start!" << endl;
        cout << endl;

        while (dealerScore < 17)
        {
            die1.roll();
            die2.roll();
            dealerScore += die1.getValue() + die2.getValue();
        }

        while (choice == 'y' || choice == 'Y')
        {
            die1.roll();
            die2.roll();
            diceTotal = die1.getValue() + die2.getValue();
            playerScore += diceTotal;

            cout << "You rolled: " << die1.getValue() << " + " << die2.getValue() << " = " << diceTotal << endl;
            cout << "Your current total is: " << playerScore << endl;

            if (playerScore >= 21)
                break;

            do
            {
                cout << "Do you want to roll again? (y/n): ";
                cin >> choice;
            } while (choice != 'y' && choice != 'Y' && choice != 'n' && choice != 'N');

            cout << endl;
        }

        cout << "\nFinal Scores:\n";
        cout << "Player: " << playerScore << endl;
        cout << "Dealer: " << dealerScore << endl;
        cout << "------------------------" << endl;

        if (dealerScore == 21 && playerScore != 21)
        {
            cout << "The dealer rolled a total of 21. You lose!" << endl;
        }
        else if (dealerScore == 21 && playerScore == 21)
        {
            cout << "Both you and the dealer rolled a total of 21. It's a tie!" << endl;
        }
        else if (dealerScore < 21 && playerScore == 21)
        {
            cout << "You rolled a total of 21. You win!" << endl;
        }
        else if (dealerScore > 21 && playerScore <= 21)
        {
            cout << "The dealer rolled over 21. You win!" << endl;
        }
        else if (playerScore > 21 && dealerScore <= 21)
        {
            cout << "You rolled over 21. You lose!" << endl;
        }
        else if (dealerScore > 21 && playerScore > 21)
        {
            cout << "Both you and the dealer rolled over 21. It's a tie!" << endl;
        }
        else if (dealerScore < 21 && playerScore < 21)
        {
            if (playerScore > dealerScore)
                cout << "You rolled higher than the dealer. You win!" << endl;
            else if (playerScore < dealerScore)
                cout << "The dealer rolled higher than you. You lose!" << endl;
            else
                cout << "Both you and the dealer rolled the same. It's a tie!" << endl;
        }

        cout << endl;

        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;
        cout << endl;
    } while (playAgain == 'y' || playAgain == 'Y');

    return 0;
}