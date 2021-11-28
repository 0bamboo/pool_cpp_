/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 17:04:17 by abdait-m          #+#    #+#             */
/*   Updated: 2021/11/28 02:33:53 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->type = "WrongAnimal";
	std::cout << Y << "The default constructer of WrongAnimal is called ." << DEF << std::endl;  
}

WrongAnimal::WrongAnimal(WrongAnimal const& copy)
{
	this->type = copy.type;
	std::cout << DEF << "The copy constructer of WrongAnimal is called ." << DEF << std::endl;
}

WrongAnimal&	WrongAnimal::operator = (WrongAnimal const& copy)
{
	this->type = copy.type;
	std::cout << Y << "The assignment operator of WrongAnimal is called ." << DEF << std::endl;
	return  (*this);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal is making a sound ." << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return (this->type);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << Y << "The destructer of WrongAnimal is called ." << DEF << std::endl;
}
