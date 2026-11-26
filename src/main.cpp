#include "../lib/engine/Game.hpp"
#include "game_params.hpp"

int main() {
  Engine engine(sf::VideoMode(Params::game_width, Params::game_height), Params::title);
}
