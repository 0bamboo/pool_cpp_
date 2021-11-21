#ifndef SCAVTRAP
# define SCAVTRAP

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap{

	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const& copy);
		ScavTrap&	operator=(ScavTrap const& copy);
		~ScavTrap();
		void	guardGate();
		void	attack(std::string const& target);
};

#endif