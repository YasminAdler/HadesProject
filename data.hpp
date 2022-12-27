// Alon A. Rabinowitz 208142323
// Yasmin Adler 208462184
#ifndef _DATA_
#define _DATA_

#include "map.hpp"
#include "room.hpp"

class Data
{
private:
    Map *mapsData;
    Room *roomsData;
    int numberOfMaps;

public:
    /* Constructors */
    Data();

    /* Getters */
    Room getRoom();
    Map *getMapsData();

    /* Adders */
    Room *addRoom(Room);

    /* Destructor */
    ~Data();

    /* Functions */
    Data *operator+=(Map &newMap);
    Data *operator+(Map &newMap);
    Map *operator=(Map &newMap);
};


#endif