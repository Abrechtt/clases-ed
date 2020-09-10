#include<iostream>

class hero : public character
{
private:
    unsigned int level;
    const bool isBad{false};
    std::string* skills;
public:
    hero(short int, unsigned int, unsigned int, short int, unsigned int, unsigned int, std::string*);
    ~hero();
    std::string* GetSkills() const;
    unsigned int GetLevel() const;
};

