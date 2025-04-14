#include "Player.h"
#include <cstdlib>
#include <ctime>
#include <string>

Player::Player(std::string playerName)
{
    std::srand(static_cast<unsigned int>(std::time(0)));

    name = playerName;
    guess = "";
    points = 0;
}

void Player::makeGuess()
{
    const int MIN_VALUE = 0;
    const int MAX_VALUE = 1;

    int guessNum;

    guessNum = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;

    if (guessNum == 0)
        guess = "Cho (even)";
    else
        guess = "Han (odd)";
}

void Player::addPoints(int pointValue)
{
    points += pointValue;
}

std::string Player::getName()
{
    return name;
}

std::string Player::getGuess()
{
    return guess;
}

int Player::getPoints()
{
    return points;
}