#ifndef DIAMONTRAP
#define DIAMONTRAP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class	DiamondTrap : public ScavTrap, public FragTrap{

	private:
		std::string	_name_;

	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap const& copy);
		DiamondTrap&	operator=(DiamondTrap const& copy);
		~DiamondTrap();
		void	whoAmI();

};

#endif