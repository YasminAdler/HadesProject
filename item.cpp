
#include <iostream>
#include <cstring>
#include "item.hpp"
#include "rarity.hpp"

using namespace std;

Item::Item(char *name, int rarity)
{
    this->name = strdup(name);
    if (name == NULL)
    {
        cout << "Memory allocation failed";
        return;
    }
    this->rarity = rarity;
}

/* Getters */
const char *Item::getName()
{
    return name;
}

const int Item::getRarity()
{
    return rarity;
}

/* Setters*/
void Item::setName(char *name)
{
    if (this->name)
        delete[] this->name;
    this->name = strdup(name);
    if (name == NULL)
        cout << "Memory allocation failed";
}

void Item::setRarity(int rarity)
{
    if (rarity < 0 || rarity >= lastRarity)
    {
        cout << "Not a valid rarity";
        return;
    }
    this->rarity = rarity;
}

/* Destructor */
Item::~Item()
{
    if (name)
        delete[] name;
}

/* Operators */
Item &Item::operator=(const Item &item)
{
    name = strdup(item.name);
    rarity = item.rarity;
    return *this;
}
// Item &operator+=(const Item &itemL, const Item &itemR)
// {
//     Item tempL = itemL;
//     Item tempR = itemR;
//     int rarity;
//     if (tempL.getRarity() < tempR.getRarity())
//         tempL.setRarity(tempR.getRarity());
//     if (tempL.getRarity() + 1 == lastRarity)
//         return itemL;
//     tempL.setRarity(
// }

Item &operator+(Item &itemL, const Item &itemR)
{
    Item temp = itemL;
    temp += itemR;
    return temp;
}

// // creating a new item
// Item &operator=(const Item &newItem);

// ~Item();

// creating a new item
// Item Item::operator=(Item newItem)
// {
//     char buff[100] = {'\0'};
//     cout << "Item name:\n";
//     cin >> buff;
//     newItem.name = strdup(buff);
//     while(newItem.rarity > 3 || newItem.rarity < 0 )
//     {
//     cout << "Item rarity between 0-3:\n";
//     cin >> newItem.rarity;
//     return newItem;
//     }
// }

// adding a new item to the item list
// Item* operator+(const Item &newItem, Room currentRoom)
// {
//     currentRoom.items
//     void* realloc(void* ptr, size_t new_size);
// }