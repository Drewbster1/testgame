#include "MainApp.hpp"

#include <cstdint>
#include <iostream>

namespace app {

void MainApp::Run() {
  window_.setFramerateLimit(kDefaultFrameLimit);
  while (window_.isOpen()) {
    sf::Event event{};
    while (window_.pollEvent(event)) {
      if (event.type == sf::Event::Closed) {
        window_.close();
      } else if (event.type == sf::Event::KeyPressed) {
        this->Update(event.key.scancode);
      }
    }
    this->Render();
  }
}

void MainApp::Render() {
  // clear old frame
  window_.clear(sf::Color::Black);

  window_.draw(this->GetGameObject());

  // signal done drawing
  window_.display();
}

void MainApp::Update(const sf::Keyboard::Scan::Scancode& key_code) {
  switch (key_code) {
    case sf::Keyboard::Scan::W:
      this->GetGameObject().move(0, -10.f);
      break;
    case sf::Keyboard::Scan::A:
      this->GetGameObject().move(-10.f, 0.f);
      break;
    case sf::Keyboard::Scan::S:
      this->GetGameObject().move(0.f, 10.f);
      break;
    case sf::Keyboard::Scan::D:
      this->GetGameObject().move(10.f, 0.f);
      break;
    default:
      std::cout << "idk\n";
      break;
  }
  std::cout << "Position X(" << GetGameObject().getPosition().x << ") Y(" << GetGameObject().getPosition().y << ")\n";
}

}  // namespace app