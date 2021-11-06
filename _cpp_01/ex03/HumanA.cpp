# include "HumanA.hpp"

HumanA::HumanA(std::string _name_, Weapon &_weapon_):weapon(_weapon_), name(_name_)
{}

HumanA::~HumanA(){ }

void	HumanA::attack(void)
{
	std::cout << this->name << " attacks with his " << this->weapon.getType() << std::endl;
}
