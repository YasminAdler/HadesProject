#include <iostream>
#include "room.h"
#include <string.h>
using namespace std;

Room::Room(char* name, Item itemList)
{
    name = strdup(name);
    items = &itemList;
}