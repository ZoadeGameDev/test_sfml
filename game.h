//
// Created by zoade on 28.10.2026.
//

#ifndef TEST_SFML_GAME_H
#define TEST_SFML_GAME_H
#include <SFML/Graphics.hpp>

class Game {
    sf::RenderWindow window;
    std::optional<sf::Sprite> cuphead;
    sf::Texture texture;

public:
    void Loop();

    void Initialize();






};


#endif // TEST_SFML_GAME_H
