#ifndef COMMAND_H
#define COMMAND_H

#include <string>
#include <vector>
#include <map>
#include "gamepage.h"
#include <iostream>
#include <memory>

class Game;

class Command {

    std::string curCommand;
    std::vector<std::string> commands;
    std::vector<std::string> special;
    int multiplier;
    Player* player1;
    Player* player2;
    Player* curPlayer;
    std::unique_ptr<std::ifstream> in;
    Game* game;
    int numDrop;
    std::map<std::string, std::string> altName;
    bool readFile;

    void readNum();

public:

    Command(Player* player1, Player* player2, Game* game, bool test);
    ~Command();
    
    //throws logic error
    void readCommand(bool special = false);
    void runCommand();
    void switchPlayer(Player* player);
    void specialAction();
    int getMultiplier();

private:
    void runSpecial();
};


#endif


