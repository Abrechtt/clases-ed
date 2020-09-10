#include<iostream>

class character
{
private:
    short int health;
    unsigned int strength;
    unsigned int exp;
    short int luck;
    std::string lore;
    unsigned int speed;
public:
    character(short int, unsigned int , unsigned int, short int, unsigned int);//constructor
    ~character();//destructor
    short int GetHealth() const;
    unsigned int GetStrength() const;
    unsigned int GetExp() const;
    short int GetLuck() const;
    std::string GetLore() const;
    unsigned int GetSpeed() const;

    void SetLore(std::string);
    void GetDamage(short int damage);
};

