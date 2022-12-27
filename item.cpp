// Alon A. Rabinowitz 208142323
// Yasmin Adler 208462184
#include <iostream>
#include <cstring>
#include "item.hpp"
#include "rarity.hpp"

using namespace std;

Item::Item(char *name, int rarity)
{
    this->name = strdup(name);
    if (name == NULL)
    {
        cout << "Memory allocation failed";
        return;
    }
    this->rarity = rarity;
}

/* Getters */
const char *Item::getName()
{
    return name;
}

const int Item::getRarity()
{
    return rarity;
}

/* Setters*/
bool Item::setName(char *name)
{
    if (this->name)
        delete[] this->name;
    this->name = strdup(name);
    if (name == NULL)
    {
        // cout << "Memory allocation failed";
        return false;
    }
    return true;
}

bool Item::setRarity(int rarity)
{
    if (rarity < 0 || rarity >= lastRarity)
    {
        // cout << "Not a valid rarity";
        return false;
    }
    this->rarity = rarity;
    return true;
}

/* Operators */
Item &Item::operator=(const Item &item)
{
    if (name)
        delete[] name;
    name = strdup(item.name);
    rarity = item.rarity;
    return *this;
}

Item &Item::operator++()
{
    if (this->rarity + 1 == lastRarity)
        return *this;
    ++this->rarity;
    return *this;
}

Item &Item::operator++(int)
{
    if (this->rarity + 1 == lastRarity)
        return *this;
    this->rarity++;
    return *this;
}

Item &Item::operator+=(const Item &itemR)
{
    Item tempR = itemR;
    int rarity;
    if (this->rarity < itemR.rarity)
        this->rarity = itemR.rarity;
    if (this->rarity + 1 == lastRarity)
        return *this;
    this->rarity++;
    return *this;
}

Item &Item::operator+(const Item &itemR)
{
    *this += itemR;
    return *this;
}

/* Destructor */
Item::~Item()
{
    if (name)
        delete[] name;
}

std::ostream &operator<<(std::ostream &os, Item &item)
{
    os << item.getName()
       << " "
       << item.getRarity();
    return os;
}