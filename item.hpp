// Alon A. Rabinowitz 208142323
// Yasmin Adler 208462184
#ifndef _ITEM_
#define _ITEM_

class Item
{
private:
    char *name;
    int rarity;

public:
    /* Constructors */
    Item()
        : name(nullptr), rarity(0) {}
    Item(char *name, int rarity);

    /* Getters */
    const char *getName();
    const int getRarity();

    /* Setters */
    bool setName(char *name);
    bool setRarity(int rarity);

    /* Operators */
    Item &operator=(const Item &item);
    Item &operator++();
    Item &operator++(int);
    Item &operator+=(const Item &itemR);
    Item &operator+(const Item &itemR);

    /* Destructor */
    ~Item();
};
/* Stream operators */
std::ostream &operator<<(std::ostream &os, const Item &item);

#endif