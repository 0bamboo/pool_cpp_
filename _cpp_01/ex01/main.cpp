#include "Zombie.hpp"

int main()
{
	int num = 20;
    Zombie *zombies = zombieHorde(num, "Zombie_nbr_");

    for (int i = 0; i < num ; i++)
	{
        zombies[i].announce();
	}

    delete [] zombies;
}