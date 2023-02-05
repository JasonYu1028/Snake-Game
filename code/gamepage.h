#ifndef GAME_PAGE
#define GAME_PAGE
#include "board.h"

class GamePage {
    Board* board;
    int score;

public:
    Board(Board* board);
    ~Board();
};

#endif