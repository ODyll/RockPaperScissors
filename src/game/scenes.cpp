#include "scenes.hpp"
#include "game_parameters.hpp"

using gs = GameSystem;
using param = Parameters;

std::shared_ptr<Scene> Scenes::menu;
std::shared_ptr<Scene> Scenes::play;

void MenuScene::update(const float& dt) {
}

void MenuScene::render() {
}

void MenuScene::load() {
}

void MenuScene::unload() {}


void PlayScene::load() {
}

void PlayScene::unload() {
}

void PlayScene::update(const float& dt) {
}

void PlayScene::render() {
}