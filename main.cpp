#include <iostream>
#include <SFML/Graphics.hpp>

#include "game.h"

int main()
{
    Game game;
    game.Initialize();
    game.Loop();

}