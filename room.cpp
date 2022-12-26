// Alon A. Rabinowitz 208142323
// Yasmin Adler 208462184
#include <iostream>
#include <cstring>
#include "room.hpp"
#include "Direction.hpp"

using namespace std;

// Constructors:
Room::Room()
    : name(nullptr),
      items(nullptr),
      monsters(nullptr),
      NorthRoom(nullptr),
      SouthRoom(nullptr),
      EastRoom(nullptr),
      WestRoom(nullptr),
      numberOfitems(0),
      numberOfMonsters(0) {}

Room::Room(const char *name, Item *itemList)
{
    name = strdup(name);
    items = itemList;
    NorthRoom = NULL;
    SouthRoom = NULL;
    EastRoom = NULL;
    WestRoom = NULL;
}

Room::Room(const char *name, Item *itemList, Monster *monsterList)
{
    name = strdup(name);
    items = itemList;
    monsters = monsterList;
    NorthRoom = NULL;
    SouthRoom = NULL;
    EastRoom = NULL;
    WestRoom = NULL;
}

// Getters:
Item *Room::getItems()
{
    return items;
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
            monsters[i]++; // operator overloding
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

const char *Room::getName()
{
    return name;
}

Room *Room::getDirection(Direction direction)
{
    switch (direction)
    {
    case North:
        return this->NorthRoom;
    case South:
        return this->SouthRoom;
    case East:
        return this->EastRoom;
    case West:
        return this->WestRoom;
    default:
        return nullptr;
    }
}

// Adders:
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

Room *Room::addRoom(Room& room, Direction direction)
{
    if (getDirection(direction) != nullptr)
        return &room;
    switch (direction)
    {
    case North:
        this->NorthRoom = &room;
        break;
    case South:
        this->SouthRoom = &room;
        break;
    case East:
        this->EastRoom = &room;
        break;
    case West:
        this->WestRoom = &room;
        break;
    }
    room.addRoom(*this, (Direction)((direction + 2) % 4));
    return &room;
}

/* Functions */
Room *Room::findRoom(Room &room)
{
    Room *temp;
    unsigned static flag = 0;
    if (flag == 1)
        return nullptr;
    flag = 1;
    if (name == room.getName())
        return this;
    if (NorthRoom != nullptr)
    {
        temp = NorthRoom->findRoom(room);
        if (temp != nullptr)
            goto END;
    }
    if (SouthRoom != nullptr)
    {
        temp = SouthRoom->findRoom(room);
        if (temp != nullptr)
            goto END;
    }
    if (EastRoom != nullptr)
    {
        temp = EastRoom->findRoom(room);
        if (temp != nullptr)
            goto END;
    }
    if (WestRoom != nullptr)
    {
        temp = WestRoom->findRoom(room);
        if (temp != nullptr)
            goto END;
    }
    return nullptr;
END:
    flag = 0;
    return temp;
}

Room::~Room()
{
    if (name)
        delete[] name;
    if (items)
        delete[] items;
    if (monsters)
        delete[] monsters;
    if (NorthRoom)
        delete NorthRoom;
    if (SouthRoom)
        delete SouthRoom;
    if (EastRoom)
        delete EastRoom;
    if (WestRoom)
        delete WestRoom;
}

// Stream operators:
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
