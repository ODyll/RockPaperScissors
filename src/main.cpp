#include "game/game_params.hpp"
#include "game/Game.hpp"

int main() {
  Game game(sf::VideoMode(Params::game_width, Params::game_height), Params::title);
  game.run();
}
