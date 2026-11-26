#include "Engine.hpp"

Engine::Engine(sf::VideoMode res, const char* name)
  : pWindow(res, name) {};

void Engine::close() {
  pWindow.close();
}

bool Engine::isWinOpen() {
  return pWindow.isOpen();
};

bool Engine::pollEvent(sf::Event& e) {
  return pWindow.pollEvent(e);
};
