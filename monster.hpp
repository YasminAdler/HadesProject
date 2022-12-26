// Alon A. Rabinowitz 208142323
// Yasmin Adler 208462184
#ifndef _MONSTER_
#define _MONSTER_
#include <ostream>

class Monster
{
private:
    char *name;
    int level;

public:
    /* Constructors */
    Monster();
    Monster(const char *, int);

    /* Getters */
    const char *getName();
    const int getLevel();

    /* Setters */
    bool setName(const char *);
    bool setLevel(const int);

    /* Operators */
    Monster &operator+=(const Monster &);
    Monster &operator++();
    Monster &operator++(int);
    Monster &operator=(const Monster &);

    /* Destructor */
    ~Monster();
};

/* Stream operators */

std::ostream &operator<<(std::ostream &os, const Monster &);



#endif