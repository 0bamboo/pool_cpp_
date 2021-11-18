#ifndef FRAGTRAP
# define FRAGTRAP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap{

	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(FragTrap const& copy);
		FragTrap&	operator=(FragTrap const& copy);
		~FragTrap();
		void	highFivesGuys(void);
		void	attack(std::string const& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif