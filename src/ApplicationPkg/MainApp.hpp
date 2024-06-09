#pragma once
#include <SFML/Graphics.hpp>

#include "MainAppPkg.hpp"

namespace app {

class MainApp {
 public:
  MainApp()
      : window_{{kFrameWidth, kFrameHeight}, "test"},
        game_object_{std::make_unique<sf::RectangleShape>(sf::Vector2{50.f, 50.f})} {
    game_object_->setFillColor(sf::Color::Blue);
    game_object_->setPosition(500.f, 500.f);
  }
  ~MainApp() = default;

  MainApp(const MainApp&) = delete;
  MainApp(MainApp&&) = delete;
  MainApp& operator=(const MainApp&) = delete;
  MainApp& operator=(MainApp&&) = delete;

  /// @brief Run game
  void Run();
  /// @brief Render stuff?
  void Render();

  void Update(const sf::Keyboard::Scan::Scancode& key_code);

  sf::RectangleShape& GetGameObject() { return *game_object_; }

 private:
  sf::RenderWindow                    window_;
  std::unique_ptr<sf::RectangleShape> game_object_;
};

}  // namespace app