#include <iostream>
#include <string>

#pragma once

class Weapon
{
private:
    std::string type;

public:
    const std::string &getType() const; // if is const (de 2 ori) I am passing as ref

    void setType(std::string new_type);
};
