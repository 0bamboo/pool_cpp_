# include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap():FragTrap()
{
	this->_name_ = "unknown";
	this->_HitPoints_ = FragTrap::_HitPoints_;
	this->_EnergyPoints_ = ScavTrap::_EnergyPoints_;
	this->_AttackDamage_ = FragTrap::_AttackDamage_;
	std::cout << "\033[1;33mThe default constructor of DiamondTrap is called .\033[0;37m" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name):FragTrap(name + "_clap_name")
{
	this->_name_ = name;
	this->_HitPoints_ = FragTrap::_HitPoints_;
	this->_EnergyPoints_ = ScavTrap::_EnergyPoints_;
	this->_AttackDamage_ = FragTrap::_AttackDamage_;
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
	std::cout << "My name is " << this->_name_ << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "\033[1;33mThe destructor is of DiamondTrap called .\033[0;37m" << std::endl;
}