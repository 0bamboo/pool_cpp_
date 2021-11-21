/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 06:15:03 by abdait-m          #+#    #+#             */
/*   Updated: 2021/11/20 06:15:03 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	this->_name_ = "unknown";
	this->_HitPoints_ = 10;
	this->_EnergyPoints_ = 10;
	this->_AttackDamage_ = 0;
	std::cout << "\033[1;33mThe default constructor of ClapTrap is called .\033[0;37m" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	this->_name_ = name;
	this->_HitPoints_ = 10;
	this->_EnergyPoints_ = 10;
	this->_AttackDamage_ = 0;
	std::cout << "\033[1;33mThe constructor with parameter of ClapTrap is called .\033[0;37m" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const& copy)
{
	*this = copy;
	std::cout << "\033[1;33mThe copy constructor of ClapTrap is called .\033[0;37m" << std::endl;
}

ClapTrap&	ClapTrap::operator=(ClapTrap const& copy)
{
	this->_name_ = copy._name_;
	this->_HitPoints_ = copy._HitPoints_;
	this->_EnergyPoints_ = copy._EnergyPoints_;
	this->_AttackDamage_ = copy._AttackDamage_;
	std::cout << "\033[1;33mThe copy assignement operator of ClapTrap is called .\033[0;37m" << std::endl;
	return (*this);
}

void	ClapTrap::attack(std::string const& target)
{
	std::cout << "\033[1;36mClapTrap " << this->_name_ <<  " attack " << target << ", causing " << this->_AttackDamage_ << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "\033[1;36mClapTrap " << this->_name_ <<  " has lost " << amount << " points of damage!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	 std::cout << "\033[1;36mClapTrap " << this->_name_ <<  " has repaired " << amount << " points!" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "\033[1;33mThe destructor is of ClapTrap called .\033[0;37m" << std::endl;
}
