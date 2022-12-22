// Alon A. Rabinowitz 208142323
// Yasmin Adler 208462184
#ifndef _DATA_
#define _DATA_

#include "map.hpp"
#include "room.h"

class Data
{
private:
    Map *mapsData;
    Room *roomsData;

public:
    /* Constructors */
    Data();

    /* Getters */
    Room getRoom();
    
    /* Destructor */
    ~Data();
};

#endif