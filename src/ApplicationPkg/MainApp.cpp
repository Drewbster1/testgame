#include "MainApp.hpp"

namespace app {
void MainApp::Run() {
  window_.setFramerateLimit(kDefaultFrameLimit);
  while (window_.isOpen()) {
    sf::Event event{};
    while (window_.pollEvent(event)) {
      if (event.type == sf::Event::Closed) {
        window_.close();
      }
    }
  }
  window_.clear();
  window_.display();
}

}  // namespace app