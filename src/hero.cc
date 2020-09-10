#include "hero.hh"

hero::hero(short int health, unsigned int strength, unsigned int exp, short int luck, unsigned int speed, unsigned int level, std::string* skills)
std::character(health, strength, exp, luck, speed)
{
    this->level=level;
    this->skills=skills;
}

std::string* hero::GetSkills() const
{
    return skills;
}

unsigned int hero::GetLevel() const
{
    return level;
}