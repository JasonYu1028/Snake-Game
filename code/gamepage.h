#ifndef GAME_PAGE
#define GAME_PAGE
#include "absboard.h"
#include "cell.h"

class GamePage {
    std::vector<std::vector<std::shared_ptr<Cell>>> board;
    std::unique_ptr<Level> level;
    int levelNum;
    int score;
    std::shared_ptr<Cell> curObj;
    char nextObj;

public:
    Board(Board* board);
    ~Board();
};

#endif