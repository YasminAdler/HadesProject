// Alon A. Rabinowitz 208142323
// Yasmin Adler 208462184
#ifndef _MAP_
#define _MAP_
#include <iostream>
#include "room.hpp"
#include "Direction.hpp"

class Map
{
private:
    char *name;
    Room *rooms;
    int numberOfRooms;
    Room *currentRoom;
public:
    /* Constructors */
    Map();
    Map(const char* name);

    /* Functions */
    Room *AddRoom(Room, Direction);
    Room *findRoom(Room&);

    /* Destructor */
    ~Map();
    
    /* Getters */
    char* GetName();
    Room*GetRooms();
    Room* GetCurrentRooms();

};
#endif
