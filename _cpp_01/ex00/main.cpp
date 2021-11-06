#include "Zombie.hpp"

int main(void)
{
	Zombie *zombie;

	zombie = newZombie("mugiwara");
	zombie->announce();
	delete(zombie);

	randomChump("Zoro");
}