#pragma once
#include <SFML/Graphics.hpp>

// Main engine class -> Game Class inherits from this
class Engine {
public:
  Engine(sf::VideoMode res, const char* name)
    : pWindow(res, name) {};

  // ~Engine();

protected:
  void close() {
    pWindow.close();
  }

  bool isWinOpen() {
    return pWindow.isOpen();
  }

  bool pollEvent(sf::Event& e) {
    return pWindow.pollEvent(e);
  }

private:
  sf::RenderWindow pWindow;
};
