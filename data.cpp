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
Data* Data::operator+=(Map &newMap)
{
    for (int i = 0; i < numberOfMaps; i++)
    {
        if (strcpy(mapsData[i].GetName(), newMap.GetName()) == 0)
        {
            cout << "This map already exists\n";
            return this;
        }
    }
    Room* available;
    available = newMap.GetCurrentRooms();
    if(available != NULL)
    {
        mapsData->AddRoom(*available, North);
    }
    return this;
}

Data* Data::operator+(Map &newMap)
{
    for (int i = 0; i < numberOfMaps; i++)
    {
        if (strcpy(mapsData[i].GetName(), newMap.GetName()) == 0)
        {
            cout << "This map already exists\n";
            return this;
        }
    }
    Map* newMapsData = new Map[sizeof(newMap)+sizeof(mapsData)];
    for(int i = 0; i< numberOfMaps; i++)
    {
        newMapsData[i] = mapsData[i];
    }
    newMapsData[numberOfMaps] = newMap;
    numberOfMaps++;
    delete[] mapsData;
    mapsData = newMapsData;
    return this;
}

Map* Data::operator=(Map &newMap)
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


