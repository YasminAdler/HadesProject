// Alon A. Rabinowitz 208142323
// Yasmin Adler 208462184
#include <iostream>
#include <cstring>
#include "data.hpp"

using namespace std;

/* Constructors */
inline Data::Data()
    : mapsData(nullptr), roomsData(nullptr){};

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
Map &Data::operator+=(Map &newMap)
{
    for (int i = 0; i < numberOfMaps; i++)
    {
        if (strcpy(mapsData[i].GetName(), newMap.GetName()) == 0)
        {
            cout << "This map already exists\n";
            return *(this->getMapsData());
        }
    }
    Room* available;
    available = newMap.GetCurrentRooms();
    if(available != NULL)
    {
        mapsData->AddRoom(*available, North);
    }

}

Map &Data::operator+=(Map &newMap)
{
    for (int i = 0; i < numberOfMaps; i++)
    {
        if (strcpy(mapsData[i].GetName(), newMap.GetName()) == 0)
        {
            cout << "This map already exists\n";
            return *(this->getMapsData());
        }
    }
    Room* available;
    available = newMap.GetCurrentRooms();
    if(available != NULL)
    {
        mapsData->AddRoom(*available, North);
    }
    
}

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
