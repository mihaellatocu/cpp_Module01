#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), weapon_type(nullptr) {}

void HumanB::setWeapon(Weapon &weapon)
{
    this->weapon_type = &weapon;
}

void HumanB::attack()
{
    if (weapon_type)
        std::cout << name << " attacks with their " << weapon_type->getType() << "\n";
    else
        std::cout << name << " attacks without an weapon \n";
}
HumanB::~HumanB() {}