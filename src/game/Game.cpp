#include "Game.hpp"
#include "SFML/Window/VideoMode.hpp"

Game::Game(sf::VideoMode res, const char* title)
  : Engine(res, title) {};

void Game::run() {
  while (isWinOpen()) {
    sf::Event e;
    while (pollEvent(e)) {
      if (e.type == sf::Event::Closed) {
        close();
        pGameEnded = true;
      }
    }
  }
}
