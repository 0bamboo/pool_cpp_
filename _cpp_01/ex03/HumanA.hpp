#ifndef HUMANA
#define HUMANA

#include "Weapon.hpp"

class HumanA{

	private:
		Weapon		&weapon;
		std::string	name;

	public:
		HumanA(std::string _name_, Weapon &_weapon_);
		~HumanA();
		void	attack(void);
};

#endif
