// Abstract Subject
#ifndef ABSBOARD_H
#define ABSBOARD_H
#include <vector>
#include <memory>

class ABSDisplay;

class ABSBoard {

  std::vector<std::shared_ptr<ABSDisplay>> displays;

public:

  void notifyDisplay();
  void notifyBoard();
  void attach(std::shared_ptr<ABSDisplay> o);
  void detach(std::shared_ptr<ABSDisplay> o);
  virtual ~ABSBoard() = default;
};


#endif





