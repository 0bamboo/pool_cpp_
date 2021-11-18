#ifndef CLAPTRAP
# define CLAPTRAP
# include <iostream>

class ClapTrap{

	private:
		std::string		_name_;
		unsigned int	_HitPoints_;
		unsigned int	_EnergyPoints_;
		unsigned int	_AttackDamage_;

	public:
		ClapTrap(std::string name);
		ClapTrap();
		ClapTrap(ClapTrap const& copy);
		~ClapTrap();
		ClapTrap&	operator=(ClapTrap const& copy);
		void		attack(std::string const& target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);

};

#endif