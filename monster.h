#ifndef _MONSTER_
#define _MONSTER_

class Monster
{
private:
    char *name;
    int level;

public:
    Monster();
};

Monster monsterList[10]
{
    Monster((char*)"Bogeyman"),
    Monster((char*)"Bogeyman"),
    Monster((char*)"Bogeyman"),
    Monster((char*)"Bogeyman"),
}

#endif