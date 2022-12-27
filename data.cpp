// Alon A. Rabinowitz 208142323
// Yasmin Adler 208462184
#include <iostream>
#include <cstring>
#include "data.hpp"

using namespace std;


Monster monsterList[9]{
    Monster((char *)"Typhon", 0),
    Monster((char *)"Echidna", 0),
    Monster((char *)"Gorgons", 0),
    Monster((char *)"Cerberus", 0),
    Monster((char *)"Minotaur", 0),
    Monster((char *)"Python", 0),
    Monster((char *)"Sphinx", 0),
    Monster((char *)"Lamia", 0),
    Monster((char *)"Giants", 0)};


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

Room roomArray[10]{
    {"room1", itemLIst, monsterList},
    {"room2", itemLIst, monsterList},
    {"room3", itemLIst, monsterList},
    {"room4", itemLIst, monsterList},
    {"room5", itemLIst, monsterList},
    {"room6", itemLIst, monsterList},
    {"room7", itemLIst, monsterList},
    {"room8", itemLIst, monsterList},
    {"room9", itemLIst, monsterList},
    {"room10", itemLIst, monsterList}};

/* Constructors */
Data::Data()
    : mapsData(nullptr), roomsData(roomArray){};

/* Getters */
Map *Data::getMapsData()
{
    return mapsData;
}

/* Adders */
Room *Data::addRoom(Room room)
{
    unsigned i = 0;
    Room *temp;
    while (roomsData + i != nullptr)
    {
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
Data *Data::operator+=(Map &newMap)
{
    for (int i = 0; i < numberOfMaps; i++)
    {
        if (strcpy(mapsData[i].GetName(), newMap.GetName()) == 0)
        {
            cout << "This map already exists\n";
            return this;
        }
    }
    Room *available;
    available = newMap.GetCurrentRooms();
    if (available != NULL)
    {
        mapsData->AddRoom(*available, North);
    }
    return this;
}

Data *Data::operator+(Map &newMap)
{
    for (int i = 0; i < numberOfMaps; i++)
    {
        if (strcpy(mapsData[i].GetName(), newMap.GetName()) == 0)
        {
            cout << "This map already exists\n";
            return this;
        }
    }
    Map *newMapsData = new Map[sizeof(newMap) + sizeof(mapsData)];
    for (int i = 0; i < numberOfMaps; i++)
    {
        newMapsData[i] = mapsData[i];
    }
    newMapsData[numberOfMaps] = newMap;
    numberOfMaps++;
    delete[] mapsData;
    mapsData = newMapsData;
    return this;
}

Map *Data::operator=(Map &newMap)
{
    for (int i = 0; i < numberOfMaps; i++)
    {
        if (strcpy(mapsData[i].GetName(), newMap.GetName()) == 0)
        {
            cout << "This map already exists\n";
            return this->mapsData;
        }
    }
    delete[] mapsData;
    mapsData = new Map[sizeof(newMap)];
    mapsData = &newMap;

    return mapsData;
}


