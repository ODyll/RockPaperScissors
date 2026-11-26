#pragma once
#include <SFML/Graphics.hpp>

// Main engine class -> Game Class inherits from this
class Engine {
public:
  Engine(sf::VideoMode res, const char* name)
    : pWindow(res, name) {run();};

  // ~Engine();

  void run() {
    while (pWindow.isOpen()) {
      sf::Event e;

      while (pWindow.pollEvent(e)) {
        if (e.type == sf::Event::Closed) {
          pWindow.close();
        }
      }

      // pWindow.clear();
      // pWindow.display();
    }
  }

private:
  sf::RenderWindow pWindow;
};
