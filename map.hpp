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
    Map();

    /* Functions */
    Room *AddRoom(Room, Direction);

    /* Destructor */
    ~Map();
    
    /* Getters */
    char* GetName();

};
#endif
