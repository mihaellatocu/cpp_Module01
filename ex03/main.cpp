#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    Weapon a ;
    a.setType("arma mortala");

    std::cout << "Both human attacks, second one doesn't have a weapon: \n\n";

    HumanA person1("Antonio", a);
    person1.attack();
    
    HumanB person2("Miha");
    person2.attack();

    std::cout << "\nSecond person gets the same a weapon: \n\n";
    person2.setWeapon(a);

    a.setType("knife");
    person1.attack();
    person2.attack();
    

    return (0);
}