#include "game/game_parameters.hpp"
#include "game/scenes.hpp"
#include "game/"

using param = Parameters;

int main() {
    Scenes::menu = std::make_shared<MenuScene>();
    Scenes::menu->load();
    GameSystem::set_active_scene(Scenes::menu);
    GameSystem::start(param::game_width, param::game_height, "Rock, Paper, Scissors", param::time_step, false);
}
