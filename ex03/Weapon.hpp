#include <iostream>
#include <string>

#pragma once

class Weapon
{
    private:
        std::string type;

    public:
        std::string getType();

        void setType(std::string new_type);
   
};
