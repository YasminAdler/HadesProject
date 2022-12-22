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
    Monster(char *, int);

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

    /* Destructor */
    ~Monster();
};

/* Stream operators */

std::ostream &operator<<(std::ostream &os, const Monster &);

Monster monsterList[9]{
    Monster((char *)"Typhon", 0),
    Monster((char *)"Echidna", 0),
    Monster((char *)"Gorgons", 0),
    Monster((char *)"Cerberus", 0),
    Monster((char *)"Minotaur", 0),
    Monster((char *)"Python", 0),
    Monster((char *)"Sphinx", 0),
    Monster((char *)"Lamia", 0),
    Monster((char *)"Giants", 0)};

#endif