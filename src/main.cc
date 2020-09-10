#include<iostream>

#include "hero.hh"

int main()
{
    hero** herolist
    {
        new hero*[2]
        {
            new hero(5, 3, 4, 7, 1, 6, new std::string[4]{{"fire ball"}, {"fenix tail"}, {"fly"}, {"war growl"}}),
            new hero(0, 2, 1, 8, 1, 9, new std::string[4]{{"fb"}, {"ft"}, {"f"}, {"wg"}}),
        }
    };

    for (int i{}; i<4; i++)
    {
        std::cout << "Hero: " << i + 1 << std::endl;    
        for(int j{}; j < 4; j++)
        {
            std::cout << "Skill: " << *((*(herolist + i))->GetSkills() + j) << std::endl;
        }
        std::cout << std::endl;
    }
    
    std::cin.get();
    return 0;
}