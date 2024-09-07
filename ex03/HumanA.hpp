#include <iostream>
#include "Weapon.hpp"

#pragma once

class HumanA 
{
    private:
        Weapon& weapon_type;
        std::string name;
    public:
        HumanA(Weapon& new_weapon, std::string name);
        void attack();

};