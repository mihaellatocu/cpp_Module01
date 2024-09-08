#include <iostream>
#include "Weapon.hpp"

#pragma once

class HumanA 
{
    private:
        std::string name;
        Weapon &weapon_type;
        
    public:
        HumanA(std::string name, Weapon& new_weapon);
        void attack();
        ~HumanA();
};