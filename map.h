#ifndef _MAP_
#define _MAP_

#include "room.h"
#include <iostream>

enum Direction
{
    North,
    South,
    East,
    West
};
class Map
{
private:
    char *name;
    Room *rooms;
    int numbeOfRooms;
    Room *currentRoon;

public:
    Map()
        : name("\0"), rooms(NULL), numbeOfRooms(0), currentRoon(NULL)
    {
    }
    Room *AddRoom(Room, Direction);
};

#endif
