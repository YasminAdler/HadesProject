// Alon A. Rabinowitz 208142323
// Yasmin Adler 208462184
#include "monster.hpp"
#include <cstring>

/* Constructors */
inline Monster::Monster()
    : name('\0'), level(0){};

Monster::Monster(char *name, int level)
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

/* Destructor */
Monster::~Monster()
{
    if (name)
        delete[] name;
}

std::ostream &operator<<(std::ostream &os, Monster &monster)
{
    os << monster.getName()
       << " "
       << monster.getLevel();
    return os;
}
