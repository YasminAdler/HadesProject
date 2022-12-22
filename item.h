#ifndef _ITEM_
#define _ITEM_

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

Item itemLIst[10] = {
    Item((char *)"books", 1),
    Item((char *)"chairs", 2),
    Item((char *)"tables", 3),
    Item((char *)"windows", 4),
    Item((char *)"curtains", 0),
    Item((char *)"kitchen", 1),
    Item((char *)"pets", 2),
    Item((char *)"plants", 3),
    Item((char *)"TV", 4),
    Item((char *)"Lamps", 0)};

#endif