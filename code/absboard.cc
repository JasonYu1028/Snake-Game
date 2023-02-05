#include "absboard.h"
#include "absdisplay.h"

void ABSBoard::notifyDisplay() {
    for (auto it : displays) {
        it->notify();
    }
}

void ABSBoard::attach(std::shared_ptr<ABSDisplay> o) {
    displays.push_back(o);
}

void ABSBoard::detach(std::shared_ptr<ABSDisplay> o) {
    for (auto it = displays.begin(); it != displays.end(); ++it) {
        if (*it == o) {
            displays.erase(it);
            break;
        }
    }
}

void ABSBoard::notifyBoard() {
    for (auto it : displays) {
        it->updateBoard();
    }
}



