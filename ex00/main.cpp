#include "Zombie.hpp"


int main()
{
    Zombie a; // calling normal class inantiated
   
    //a.announce();

    Zombie* newZ =  a.newZombie("Heap");//pointer of instance of a class
    newZ->announce();
    delete(newZ);
    
    a.randomChump("Stack");

    return (0);
}
