// Alon A. Rabinowitz 208142323
// Yasmin Adler 208462184
#include "game.hpp"

/* Constructors */
Game::Game()
    : currentMap(nullptr), data() {}

/* Destructor */
Game::~Game()
{
    if (currentMap)
        delete[] currentMap;
}