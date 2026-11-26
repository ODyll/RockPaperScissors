#include "scenes.hpp"
#include "game_parameters.hpp"
#include "renderer.hpp"

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
    _player.setSize({ 40.f, 40.f });
    _player.setOrigin({ 20.f, 20.f });
    _player.setPosition(param::game_width/2.f, param::game_height/2.f );
    _player.setFillColor(sf::Color::Green);
}

void PlayScene::unload() {
}

void PlayScene::update(const float& dt) {
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
        _player.move(-250.f * dt, 0.f);
    } else if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
        _player.move(250.f * dt, 0.f);
    }
}

void PlayScene::render() {
    Renderer::queue(&_player);
}
