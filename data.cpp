// Alon A. Rabinowitz 208142323
// Yasmin Adler 208462184
#include <iostream>
#include "data.hpp"

using namespace std;

/* Constructors */
Data::Data()
    : mapsData(nullptr), roomsData(nullptr){};

/* Getters */

/* Adders */
Room *Data::addRoom(Room room)
{
    unsigned i = 0;
    Room *temp;
    while (roomsData + i != nullptr){
        ++i;

    }
        return nullptr;
}

/* Destructor */
Data::~Data()
{
    if (mapsData)
        delete[] mapsData;
    if (roomsData)
        delete[] roomsData;
}


/*Functions*/
Map* addMap(Map* newMap)
{
    if()
}

Room roomArray[10]{
    {(char *)"room1", itemLIst[0], monsterList[0]},
    {(char *)"room2", itemLIst[1], monsterList[0]},
    {(char *)"room3", itemLIst[2], monsterList[0]},
    {(char *)"room4", itemLIst[3], monsterList[0]},
    {(char *)"room5", itemLIst[4], monsterList[0]},
    {(char *)"room6", itemLIst[5], monsterList[0]},
    {(char *)"room7", itemLIst[6], monsterList[0]},
    {(char *)"room8", itemLIst[7], monsterList[0]},
    {(char *)"room9", itemLIst[8], monsterList[0]},
    {(char *)"room10", itemLIst[9], monsterList[0]}};
