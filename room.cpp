// Alon A. Rabinowitz 208142323
// Yasmin Adler 208462184
#include <iostream>
#include <cstring>
#include "room.hpp"
#include "item.hpp"

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

Room::Room(char *name, Item itemList, Monster monsterList)
{
    name = strdup(name);
    items = &itemList;
    monsters = &monsterList;
    NorthRoom = NULL;
    SouthRoom = NULL;
    EastRoom = NULL;
    WestRoom = NULL;
}
Item *Room::getItems()
{
    return items;
}

void Room::addItem(Item newItem)
{
    numberOfitems +=1;
    Item *newArr = new Item[numberOfitems];
    for(int i = 0 ; i< numberOfitems -1; i++)
    {
        newArr[i] = items[i];
    }
    newArr[numberOfitems - 1] = newItem;
    items = newArr;
}

void Room::dupLegendaryItemCheck(Item newItem)
{
    if (newItem.getRarity() == 3)
    {
        for (int i = 0; i < numberOfitems; i++)
        {
            if (strcmp(newItem.getName(), items[i].getName()) == 0)
            {
                newItem.setRarity(0);
                addItem(newItem);
            }
        }
    }
}
