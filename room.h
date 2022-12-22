#ifndef _ROOM_
#define _ROOM_
#include <iostream>
#include "item.h"
#include "monster.h"

class Room
{
    char *name;
    Item *items;
    Monster *monsters;
    Room *NorthRoom;
    Room *SouthRoom;
    Room *EastRoom;
    Room *WestRoom;

public:
    Room();
    Room(char*, Item);
    Room(char*, Item, Monster);
};

#endif