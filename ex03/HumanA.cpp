#include "HumanA.hpp"


HumanA::HumanA(Weapon& new_weapon, std::string name) : 
weapon_type(new_weapon), name(name) {}

void HumanA::attack()
{
    std::cout << name << " attacks with their " << weapon_type.getType();
}
