#ifndef _ROOM_
#define _ROOM_
#include <iostream>
#include "monster.h"
#include "item.hpp"

class Room
{
    char *name;
    Item *items;
    Monster *monsters;
    Room *NorthRoom;
    Room *SouthRoom;
    Room *EastRoom;
    Room *WestRoom;
    int numberOfitems;

public:
    //Constructors
    Room();
    Room(char*, Item);
    Room(char*, Item, Monster);
    
    //Getters:
    Item* getItems();
    void dupLegendaryItemCheck(Item );
    

    
    void addItem(Item newItem);



};

#endif