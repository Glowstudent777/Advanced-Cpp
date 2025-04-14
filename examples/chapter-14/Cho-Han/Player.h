#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player
{
private:
    std::string name;
    std::string guess;
    int points;

public:
    Player(std::string);
    void makeGuess();
    void addPoints(int);
    std::string getName();
    std::string getGuess();
    int getPoints();
};

#endif