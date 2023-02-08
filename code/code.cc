#include <iostream>
#include <vector>

const int WIDTH = 20;
const int HEIGHT = 20;

enum Direction {
  UP,
  DOWN,
  LEFT,
  RIGHT
};

class Snake {
 public:
  Snake(int x, int y) : x(x), y(y) {}

  int x, y;
  Direction direction = RIGHT;
};

class Fruit {
 public:
  Fruit(int x, int y) : x(x), y(y) {}

  int x, y;
};

class Game {
 public:
  Game() : snake({0, 0}), fruit({10, 10}) {}

  void run() {
    while (true) {
      display();
      processInput();
      update();
    }
  }

  void display() {
    system("clear");  // Clear the console
    for (int i = 0; i < HEIGHT; i++) {
      for (int j = 0; j < WIDTH; j++) {
        if (i == fruit.y && j == fruit.x) {
          std::cout << 'F';
        } else if (i == snake.y && j == snake.x) {
          std::cout << 'S';
        } else {
          std::cout << '.';
        }
      }
      std::cout << std::endl;
    }
  }

  void processInput() {
    // Check for arrow key input to change the direction of the snake
    if (/* arrow key input */) {
      // Update the direction of the snake
    }
  }

  void update() {
    // Update the position of the snake based on its direction
    // Check if the snake has collided with the fruit or a wall
    // If the snake has collided with the fruit, grow the snake and generate a new fruit
  }

 private:
  Snake snake;
  Fruit fruit;
};

int main() {
  Game game;
  game.run();
  return 0;
}