#pragma once
#include "../../lib/engine/Engine.hpp"

class Game : public Engine {
public:
  Game(sf::VideoMode res, const char* title)
    : Engine(res,  title) {
  };
};
