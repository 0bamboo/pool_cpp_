#ifndef DIAMONTRAP
#define DIAMONTRAP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class	DiamondTrap : public ScavTrap, public FragTrap{

	private:
		std::string	_name_;
		unsigned int	_HitPoints_;
		unsigned int	_EnergyPoints_;
		unsigned int	_AttackDamage_;

	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap const& copy);
		DiamondTrap&	operator=(DiamondTrap const& copy);
		~DiamondTrap();
		void	whoAmI();

};

#endif