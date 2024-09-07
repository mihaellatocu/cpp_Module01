#include "Zombie.hpp"

Zombie* Zombie::zombieHorde(int N, std::string name)
{
    Zombie* newH = new Zombie[N];
    for (int i = 0; i < N; i++)
    {
        newH[i].name = name;
       // std::cout << "Pos: " << i << "\n";
    }
     return (newH);
}