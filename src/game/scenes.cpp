#include "scenes.hpp"
#include "game_parameters.hpp"
#include "renderer.hpp"
#include "graphics_cmps.hpp"
#include "ctrl_cmps.hpp"

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
    player_texture = std::make_shared<sf::Texture>();
    player_texture->loadFromFile("resources/monke.jpg");

    std::shared_ptr<Entity> player = make_entity();
    player->set_position(sf::Vector2f(param::game_width / 2.f, param::game_height / 2.f));

    auto s = player->add_component<SpriteComponent>();
    s->set_texure(player_texture);

    player->add_component<KeyboardMovementComponent>();
}

void PlayScene::unload() {
}

void PlayScene::update(const float& dt) {
    Scene::update(dt);
}

void PlayScene::render() {
    Scene::render();
}
