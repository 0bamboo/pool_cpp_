# include "FragTrap.hpp"

FragTrap::FragTrap():ClapTrap()
{
	this->_name_ = "unknown";
	this->_HitPoints_ = 100;
	this->_EnergyPoints_ = 100;
	this->_AttackDamage_ = 30;
	std::cout << "\033[1;33mThe default constructor of FragTrap is called .\033[0;37m" << std::endl;
}

FragTrap::FragTrap(std::string name):ClapTrap(name)
{
	this->_name_ = name;
	this->_HitPoints_ = 100;
	this->_EnergyPoints_ = 100;
	this->_AttackDamage_ = 30;
	std::cout << "\033[1;33mThe constructor with parameter of FragTrap is called .\033[0;37m" << std::endl;
}

FragTrap::FragTrap(FragTrap const& copy)
{
	*this = copy;
	std::cout << "\033[1;33mThe copy constructor of FragTrap is called .\033[0;37m" << std::endl;
}

FragTrap&	FragTrap::operator=(FragTrap const& copy)
{
	this->_name_ = copy._name_;
	this->_HitPoints_ = copy._HitPoints_;
	this->_EnergyPoints_ = copy._EnergyPoints_;
	this->_AttackDamage_ = copy._AttackDamage_;
	std::cout << "\033[1;33mThe copy assignement operator of FragTrap is called .\033[0;37m" << std::endl;
	return (*this);
}

void	FragTrap::attack(std::string const& target)
{
	std::cout << "\033[1;36mFragTrap " << this->_name_ <<  " attack " << target << ", causing " << this->_AttackDamage_ << " points of damage!" << std::endl;
}


void	FragTrap::highFivesGuys(void)
{
	std::cout <<  "\033[1;36m HIGH FIVE FragTrap ." << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "\033[1;33mThe destructor is of FragTrap called .\033[0;37m" << std::endl;
}