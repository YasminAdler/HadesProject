// Alon A. Rabinowitz 208142323
// Yasmin Adler 208462184
#include "map.hpp"

/* Constructors */
Map::Map()
    : name(nullptr),
      rooms(NULL),
      numbeOfRooms(0),
      currentRoon(NULL)
{
  Room *Start;
  currentRoon = Start;
};
//       numbeOfRooms(1)
// {
//   Room *Start = new Room{(char *)"Start", nullptr};
//   rooms = new Room[1];
//   rooms[0] = Start;
//   currentRoom = Start;
// };

/* Functions */
Room *Map::AddRoom(Room room, Direction direction)
{
  Room newRoom;
  //if there is sompthing there already
  if (currentRoom->getDirection(direction) != nullptr)
    return currentRoom;
  newRoom = room;
  currentRoom->addRoom(newRoom, direction);
  return &newRoom;
};

/* Destructor */
Map::~Map(){

};


/* Getters */
char *Map::GetName()
{
  return name;
}