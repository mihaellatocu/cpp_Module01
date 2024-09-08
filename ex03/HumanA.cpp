#include "HumanA.hpp"


HumanA::HumanA(std::string name, Weapon& new_weapon) : 
name(name), weapon_type(new_weapon) {}

void HumanA::attack()
{
    std::cout << name << " attacks with their " << weapon_type.getType() << "\n";
}

HumanA::~HumanA() {}