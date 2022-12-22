// Alon A. Rabinowitz 208142323
// Yasmin Adler 208462184
#include <iostream>
#include <cstring>
#include "room.h"
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
    numberOfitems += 1;
    Item *newArr = new Item[numberOfitems];
    for (int i = 0; i < numberOfitems - 1; i++)
    {
        newArr[i] = items[i];
    }
    newArr[numberOfitems - 1] = newItem;
    delete[] items;
    items = newArr;
}

void Room::addMonster(Monster newMonster)
{
    numberOfMonsters += 1;
    Monster *newArr = new Monster[numberOfitems];
    for (int i = 0; i < numberOfMonsters - 1; i++)
    {
        newArr[i] = monsters[i];
    }
    newArr[numberOfMonsters - 1] = newMonster;
    delete[] monsters;
    monsters = newArr;
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
void Room::dupMoonsterCheck(Monster newMonster)
{
    for (int i = 0; i < numberOfMonsters; i++)
    {
        if (strcmp(newMonster.getName(), monsters[i].getName()) == 0)
        {
            monsters[i]++;      //operator overloding
        }
        if (monsters[i].getLevel() >= 5)
        {
            Monster newMonster((monsters[i].getName()), 0);
            addMonster(newMonster);
        }
    }
}

int Room::getNumOfItems()
{
    return numberOfitems;
}

int Room::getNumOfMonsters()
{
    return numberOfMonsters;
}
Monster *Room::getMonsters()
{
    return monsters;
}

ostream &operator<<(ostream &os, Room &currRoom)
{
    for (int i = 0; i < currRoom.getNumOfItems(); i++)
    {
        os << "Items:\n Name: " << (currRoom.getItems())[i].getName() << " Rarity: " << (currRoom.getItems())[i].getRarity() << endl;
    }
    for (int i = 0; i < currRoom.getNumOfMonsters(); i++)
    {
        os << "Items:\n Name: " << (currRoom.getMonsters())[i].getName() << " Level: " << (currRoom.getMonsters())[i].getLevel() << endl;
    }
    return os;
}
