#ifndef _GAME_
#define _GAME_
#include "map.h"
#include "data.h"


class Game
{
private:
    Map *currentMap;
    Data* data;

public:
Game();
~Game();
};

#endif