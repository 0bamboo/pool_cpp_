# include "ClapTrap.hpp"

int main()
{
	ClapTrap obj;
	ClapTrap obj2("abdennacer");
	ClapTrap obj3(obj2);
	
	obj2.attack("chadi");
	obj3.attack("achraf");

	obj2.takeDamage(20);
	obj3.takeDamage(20);

	obj2.beRepaired(10);
	obj3.beRepaired(10);
	return (0);
}