// Alon A. Rabinowitz 208142323
// Yasmin Adler 208462184
#include "monster.hpp"
#include <cstring>
#include <iostream>

/* Constructors */
Monster::Monster()
    : name(nullptr),
      level(0){};

Monster::Monster(const char *name, int level)
{
    this->name = strdup(name);
    this->level = level;
}

/* Getters */
const char *Monster::getName()
{
    return name;
}
const int Monster::getLevel()
{
    return level;
}

/* Setters */
bool Monster::setName(const char *name)
{
    if (name)
        return false;
    if (this->name)
        delete[] name;
    this->name = strdup(name);
    return true;
}
bool Monster::setLevel(const int level)
{
    this->level = level;
    return true;
}

/* Operators */
Monster &Monster::operator+=(const Monster &monster)
{
    this->level += monster.level;
    return *this;
}

Monster &Monster::operator++()
{
    ++this->level;
    return *this;
}

Monster &Monster::operator++(int)
{
    this->level++;
    return *this;
}

Monster &Monster::operator=(Monster &monster)
{
    if (strcpy(name, monster.getName()) == 0)
    {
        return *this;
    }
    if (name != nullptr)
        delete[] name;
    name = strdup(monster.getName());
    level = monster.getLevel();
    return *this;
}

/* Destructor */
Monster::~Monster()
{
    if (name)
        delete[] name;
}

/* Stream operators */
std::ostream &operator<<(std::ostream &os, Monster &monster)
{
    os << monster.getName()
       << " "
       << monster.getLevel();
    return os;
}
