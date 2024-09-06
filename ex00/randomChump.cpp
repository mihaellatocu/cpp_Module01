#include "Zombie.hpp"

void Zombie::randomChump(std::string name)
{
    // this->name = name;
    Zombie chump;
    chump.name = name;
    chump.announce();
}
