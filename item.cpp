
#include <iostream>
#include <cstring>
#include "item.h"

using namespace std;

Item::Item(char *nameVar, int rarityVar)
{
    name = strdup(nameVar);
    if(name == NULL)
    {
        cout << "Memory allocation failed";
        return;
    }
    rarity = rarityVar;
}
// creating a new item
Item Item::operator=(Item newItem)
{
    char buff[100] = {'\0'};
    cout << "Item name:\n";
    cin >> buff;
    newItem.name = strdup(buff);
    while(newItem.rarity > 3 || newItem.rarity < 0 )
    {
    cout << "Item rarity between 0-3:\n";
    cin >> newItem.rarity;
    return newItem;
    }
}


// adding a new item to the item list
// Item* operator+(const Item &newItem, Room currentRoom)
// {
//     currentRoom.items
//     void* realloc(void* ptr, size_t new_size);
// }



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

