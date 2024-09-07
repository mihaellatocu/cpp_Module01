#include "Zombie.hpp"


int main()
{
    Zombie z;
    Zombie* new_horde = z.zombieHorde(5, "New_Horde");

    for (int i = 0; i < 5; i++)
    {
        new_horde[i].announce();
        
    }
    delete[] new_horde;

    return (0);
}