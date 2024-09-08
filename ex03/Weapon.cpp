#include "Weapon.hpp"

const std::string &Weapon::getType() const
{
    return (type);
}
void Weapon::setType(std::string new_type)
{
    type = new_type;
}
