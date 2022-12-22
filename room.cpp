#include <iostream>
#include <cstring>
#include "room.h"
using namespace std;

Room::Room(char *name, Item itemList)
{
    name = strdup(name);
    items = &itemList;
    NorthRoom = NULL;
    SouthRoom = NULL;
    EastRoom = NULL;
    WestRoom = NULL;
}

Room(char *name, Item itemList, Monster monsterList)
{
    name = strdup(name);
    items = &itemList;
    NorthRoom = NULL;
    SouthRoom = NULL;
    EastRoom = NULL;
    WestRoom = NULL;
}
