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
    std::shared_ptr<Entity> player = make_entity();
    player->set_position(sf::Vector2f(param::game_width / 2.f, param::game_height / 2.f));
    auto s = player->add_component<ShapeComponent>();
    s->set_shape<sf::CircleShape>(10.0f);
    s->get_shape().setFillColor(sf::Color::Red);
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
