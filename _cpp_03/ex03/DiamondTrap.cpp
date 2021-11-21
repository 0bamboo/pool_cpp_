# include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	this->_name_ = "unknown";
	this->_HitPoints_ = 100;
	this->_EnergyPoints_ = 50;
	this->_AttackDamage_ = 30;
	std::cout << "\033[1;33mThe default constructor of DiamondTrap is called .\033[0;37m" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name):ClapTrap(name), FragTrap(name), ScavTrap(name) 
{
	ClapTrap::_name_ = name + "_clap_name";
	this->_name_ = name;
	this->_HitPoints_ = 100;
	this->_EnergyPoints_ = 50;
	this->_AttackDamage_ = 30;
	std::cout << "\033[1;33mThe constructor with parameter of DiamondTrap is called .\033[0;37m" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const& copy)
{
	*this = copy;
	std::cout << "\033[1;33mThe copy constructor of DiamondTrap is called .\033[0;37m" << std::endl;
}

DiamondTrap&	DiamondTrap::operator=(DiamondTrap const& copy)
{
	this->_name_ = copy._name_;
	this->_HitPoints_ = copy._HitPoints_;
	this->_EnergyPoints_ = copy._EnergyPoints_;
	this->_AttackDamage_ = copy._AttackDamage_;
	std::cout << "\033[1;33mThe copy assignement operator of DiamondTrap is called .\033[0;37m" << std::endl;
	return (*this);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "\033[1;36mMy name is \033[1;31m" << this->_name_ << "\033[1;36m This my energy points \033[1;31m" << this->_EnergyPoints_ << std::endl << std::endl;
	std::cout << "\033[1;36mAnd this is my HitPoints \033[1;31m" << this->_HitPoints_ << "\033[1;36m and This is my attack's damage \033[1;31m" << this->_AttackDamage_ << std::endl << std::endl;
	std::cout << "\033[1;36m\033[1;36mAnd the name of ClapTrap is \033[1;31m" << ClapTrap::_name_ << std::endl << std::endl;
}

void	DiamondTrap::attack(std::string const& target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::guardGate()
{
	std::cout <<  "\033[1;36mDiamondTrap have enterred in Gate keeper mode." << std::endl;
}

void	DiamondTrap::highFivesGuys(void)
{
	std::cout <<  "\033[1;36m HIGH FIVE DiamondTrap ." << std::endl;
}


DiamondTrap::~DiamondTrap()
{
	std::cout << "\033[1;33mThe destructor is of DiamondTrap called .\033[0;37m" << std::endl;
}
