#include "character.hh"

character::character(short int health, unsigned int strength, unsigned int exp, short int luck, unsigned int speed)
{
    this->health = health;
    this->strength = strength;
    this->exp = exp;
    this->luck = luck;
    this->speed = speed;
}

character::~character()
{

}

short int character::GetHealth() const
{
    return health;
}

unsigned int character::GetStrenght() const
{
    return strength;
}

unsigned int character::GetExp() const
{
    return exp;
}

unsigned int character::GetSpeed() const
{
    return speed;
}

short int character::GetLuck() const
{
    return luck;
}

std::string character::GetLore() const
{
    return lore;
}

void character::GetDamage(short int, damage)
{
    health = (health - damage) >= 0 ? damage : 0;  
}

void character::SetLore(std::string lore)
{
    this->lore = lore;
}