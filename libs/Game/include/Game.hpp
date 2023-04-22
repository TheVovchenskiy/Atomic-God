#pragma once

#include "Player.hpp"

class Game
{
private:
    sf::RenderWindow window;
    sf::Event event;

    void initWindow();

public:
    Game();
    virtual ~Game();

    // Accessors
    inline sf::RenderWindow &getWindow() { return window; }

    // Setters

    // Functions
    void update();
    void render();
};
