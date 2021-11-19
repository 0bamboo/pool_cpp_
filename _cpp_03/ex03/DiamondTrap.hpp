#ifndef DIAMONTRAP
#define DIAMONTRAP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class	DiamondTrap : public FragTrap, public ScavTrap{

	private:
		std::string	_name_;

	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap const& copy);
		DiamondTrap&	operator=(DiamondTrap const& copy);
		~DiamondTrap();
		void	attack(std::string const& target);
		void	highFivesGuys(void);
		void	guardGate();
		void	whoAmI();

};

#endif