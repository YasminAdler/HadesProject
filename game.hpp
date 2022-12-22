// Alon A. Rabinowitz 208142323
// Yasmin Adler 208462184
#ifndef _GAME_
#define _GAME_
#include "map.hpp"
#include "data.hpp"

class Game
{
private:
    Map *currentMap;
    Data data;

public:
    /* Constructors */
    Game();

    /* Destructor */
    ~Game();
};

#endif