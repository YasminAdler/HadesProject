#ifndef _ITEM_
#define _ITEM_
#include <iostream>

class Item
{
private:
    char *name;
    int rarity;

public:
    /* Constructors */
    Item()
        : name('\0'), rarity(0){}
    Item(char *name, int rarity);

    /* Getters */
    const char *getName();
    const int getRarity();

    /* Setters */
    void setName(char *name);
    void setRarity(int rarity);

    /* Operators */
    Item &operator=(const Item &item);

    /* Destructor */
    ~Item();
};

/* Operators */
Item &operator+=(const Item &itemL, const Item &itemR);
Item &operator+(const Item &itemL, const Item &itemR);
// Item & ++operator(Item &itemR); //???

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