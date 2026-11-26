#pragma once
#include <SFML/Graphics.hpp>

// Main engine class -> Game Class inherits from this
class Engine {
public:
  Engine(sf::VideoMode res, const char* name);

  // ~Engine();

protected:
  void close();

  bool isWinOpen();

  bool pollEvent(sf::Event& e);

private:
  sf::RenderWindow pWindow;
};
