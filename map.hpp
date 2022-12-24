// Alon A. Rabinowitz 208142323
// Yasmin Adler 208462184
#ifndef _MAP_
#define _MAP_

#include "room.hpp"
#include "Direction.hpp"
#include <iostream>

class Map
{
private:
    char *name;
    Room *rooms;
    int numbeOfRooms;
    Room *currentRoon;

public:
    /* Constructors */
    Map()
        : name(nullptr), rooms(NULL), numbeOfRooms(0), currentRoon(NULL){};

    /* Functions */
    Room *AddRoom(Room, Direction);
};

#endif
