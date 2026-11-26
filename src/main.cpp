#include "game/game_parameters.hpp"
#include "game/scenes.hpp"
#include "game/"

using param = Parameters;

int main() {
    Scenes::play = std::make_shared<PlayScene>();
    Scenes::play->load();
    GameSystem::set_active_scene(Scenes::play);
    GameSystem::start(param::game_width, param::game_height, "Rock, Paper, Scissors", param::time_step, false);
}
