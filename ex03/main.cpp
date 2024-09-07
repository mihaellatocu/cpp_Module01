#include "Weapon.hpp"
#include "HumanA.hpp"

int main()
{
    Weapon a;
    a.setType("arma mortala");
   // std::cout << a.getType();

    HumanA Antonio(a, "Antonio");
    Antonio.attack();
    return (0);
}