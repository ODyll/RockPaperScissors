#include <SFML/Graphics.hpp>

int game_width{1920};
int game_height{1080};


void init() {

}

void update(float dt) {

}

void render(sf::RenderWindow &window) {

}

void clean() {

}

int main() {
  sf::RenderWindow window(sf::VideoMode({game_width, game_height}), "RockPaperScissors");

  while (window.isOpen()) {
    sf::Event e;
    while (window.pollEvent(e)) {
      if (e.type == sf::Event::Closed) {
        window.close();
      }
    }
  }

}
