// Alon A. Rabinowitz 208142323
// Yasmin Adler 208462184
#include "map.hpp"

/* Constructors */
Map::Map()
    : name(nullptr),
      numberOfRooms(1)
{
  this->rooms = new Room{(char *)"Start", nullptr};
  currentRoom = &rooms[0];
};

/* Functions */
Room *Map::AddRoom(Room room, Direction direction)
{
  Room newRoom;
  // if there is sompthing there already
  if (currentRoom->getDirection(direction) != nullptr)
    return currentRoom;
  newRoom = room;
  for ()
    currentRoom->addRoom(newRoom, direction);
  return &newRoom;
}
Room *Map::findRoom(Room)
{
  
  return nullptr;
};

/* Destructor */
Map::~Map(){

};

/* Getters */
char *Map::GetName()
{
  return name;
}
