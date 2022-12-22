#ifndef _ITEM_
#define _ITEM_
#include "room.h"

enum Rarity
{
    Common,
    Uncommon,
    Epic,
    Legendary
};

class Item
{
private:
    char *name;
    int rarity;

public:
    Item()
        : name('\0'), rarity(0) {}
    Item(char *, int);

    // creating a new item
    Item operator=(Item newItem);
    // adding a new item to the item list
    friend Item *operator+(const Item &newItem, Room currentRoom);

    ~Item();
};


#endif