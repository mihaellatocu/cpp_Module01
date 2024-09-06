#include "Zombie.hpp"

Zombie* Zombie::newZombie(std::string name)
{

    Zombie *new_zombie = new Zombie; // for new I create a pointer
    new_zombie->name = name;
    
    return new_zombie;
    
}

