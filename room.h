#ifndef _ROOM_
#define _ROOM_
#include "item.h"
#include "monster.h"
#include <iostream>

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
    Room()
        : name("\0"), items(NULL), monsters(NULL), NorthRoom(NULL), SouthRoom(NULL), EastRoom(NULL), WestRoom(NULL)
    {
    };
    Room(char*, Item);
    Room(char*, Item, Monster);
};

#endif