// Alon A. Rabinowitz 208142323
// Yasmin Adler 208462184
#include "map.hpp"
#include <cstring>

/* Constructors */
Map::Map()
    : name(nullptr),
      numberOfRooms(1)
{
  rooms = new Room{(char *)"Start", nullptr};
  currentRoom = &rooms[0];
}
Map::Map(const char *name)
    : name(strdup(name)){};

/* Functions */
Room *Map::AddRoom(Room room, Direction direction)
{
  Room newRoom;
  // if there is sompthing there already
  if (currentRoom->getDirection(direction) != nullptr)
    return currentRoom;
  currentRoom = currentRoom->addRoom(newRoom, direction);
  ++numberOfRooms;
  return currentRoom;
}
Room *Map::findRoom(Room &room)
{
  return room.findRoom(room);
};

/* Destructor */
Map::~Map()
{
  if (name)
    delete[] name;
  if (rooms)
    delete rooms;
  currentRoom = nullptr;
};

/* Getters */
char *Map::GetName()
{
  return name;
}

Room *Map::GetRooms()
{
  return rooms;
}

Room *Map::GetCurrentRooms()
{
  return currentRoom;
}