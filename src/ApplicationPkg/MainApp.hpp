#pragma once
#include <SFML/Graphics.hpp>

#include "MainAppPkg.hpp"

namespace app {

class MainApp {
 public:
  MainApp() : window_{{kFrameWidth, kFrameHeight}, "test"} {}
  ~MainApp() = default;

  MainApp(const MainApp&) = delete;
  MainApp(MainApp&&) = delete;
  MainApp& operator=(const MainApp&) = delete;
  MainApp& operator=(MainApp&&) = delete;

  /// @brief Run game
  void Run();

 private:
  sf::RenderWindow window_;
};

}  // namespace app