#pragma once
#include "../../lib/engine/Engine.hpp"

class Game : public Engine {
public:
  Game(sf::VideoMode res, const char* title)
    : Engine(res,  title) {
  };

  void run() {
    while (isWinOpen()) {
      sf::Event e;
      while (pollEvent(e)) {
        if (e.type == sf::Event::Closed) {
          close();
        }
      }
    }
  }

};
