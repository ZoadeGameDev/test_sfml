//
// Created by zoade on 28.10.2026.
//
#include "game.h"

void Game::Loop() {
    while (window.isOpen())
    {
        while (const std::optional event = window.pollEvent()) {
            if (event -> is<sf::Event::Closed>()) {
                window.close();
            }
        }

        //rect.move({1.f, 1.f});

        window.clear(sf::Color::Black);
        //window.draw(rect);
        if (cuphead) {
            window.draw(*cuphead);
        }
        window.display();
    }
}

void Game::Initialize() {
    window.create(sf::VideoMode({800, 600}), "The Game");
    window.setFramerateLimit(60);

    // sf::RectangleShape rect(sf::Vector2f(100, 100));
    // rect.setFillColor(sf::Color::White);
    // rect.setPosition({window.getSize().x / 2.f, window.getSize().y / 2.f});
    // rect.setOrigin({rect.getSize().x / 2.f, rect.getSize().y / 2.f});

        texture.loadFromFile("../Texture/Cuphead_Run_03.png");
    // Check if the texture exist
    // if (!texture.loadFromFile("../Texture/Cuphead_Run_03.png")) {
    //     return -1;
    // }
    cuphead = sf::Sprite(texture);
    cuphead->setPosition({window.getSize().x / 2.f, window.getSize().y / 2.f});

}