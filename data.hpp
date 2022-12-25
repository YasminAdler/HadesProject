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
    Data()
        : mapsData(nullptr), roomsData(nullptr), numberOfMaps(0){};

    /* Getters */
    Room getRoom();

    /* Destructor */
    ~Data();

    /* Functions */
    Map *addMap(Map* newMap);
};

#endif