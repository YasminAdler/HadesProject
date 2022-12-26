// Alon A. Rabinowitz 208142323
// Yasmin Adler 208462184
#ifndef _ROOM_
#define _ROOM_
#include <ostream>
#include "monster.hpp"
#include "item.hpp"
#include "Direction.hpp"

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
    /* Constructors */
    Room();
    Room(const char *, Item *);
    Room(const char *, Item *, Monster *);

    /* Getters */
    Item *getItems();
    Monster *getMonsters();
    const char *getName();

    int getNumOfItems();
    int getNumOfMonsters();
    void dupLegendaryItemCheck(Item);
    void dupMoonsterCheck(Monster newMonster);
    // Returns the room in the requested direction.
    Room *getDirection(Direction);

    /* Adders */
    void addItem(Item newItem);
    void addMonster(Monster newMonster);
    Room *addRoom(Room&, Direction);

    /* Functions */
    Room *findRoom(Room &);

    /* Destructor */
    ~Room();
};

// Stream operators:
std::ostream &operator<<(std::ostream &os, const Room &currRoom);

#endif