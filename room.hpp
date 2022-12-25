// Alon A. Rabinowitz 208142323
// Yasmin Adler 208462184
#ifndef _ROOM_
#define _ROOM_
#include <ostream>
#include "monster.hpp"
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
    int numberOfMonsters;

public:
    // Constructors:
    Room();
    Room(char *, Item);
    Room(char *, Item, Monster);

    // Getters:
    Item *getItems();
    Monster *getMonsters();

    int getNumOfItems();
    int getNumOfMonsters();
    void dupLegendaryItemCheck(Item);
    void dupMoonsterCheck(Monster newMonster);
    Room *getDirection(Direction);

    // Adders:
    void addItem(Item newItem);
    void addMonster(Monster newMonster);
    Room *addRoom(Room, Direction);
};

// Stream operators:
std::ostream &operator<<(std::ostream &os, const Room &currRoom);

#endif