/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 17:10:12 by abdait-m          #+#    #+#             */
/*   Updated: 2021/11/28 02:34:02 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->type = "WrongCat";
	std::cout << Y << "The default constructer of WrongCat is called ." << DEF << std::endl;  
}

WrongCat::WrongCat(WrongCat const& copy)
{
	this->type = copy.type;
	std::cout << Y << "The copy constructer of WrongCat is called ." << DEF << std::endl;
}

WrongCat&	WrongCat::operator = (WrongCat const& copy)
{
	this->type = copy.type;
	std::cout << Y << "The assignment operator of WrongCat is called ." << DEF << std::endl;
	return  (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << "Meow Meow Meow !!" << std::endl;
}

std::string	WrongCat::getType() const
{
	return (this->type);
}

WrongCat::~WrongCat()
{
	std::cout << Y << "The destructer of WrongCat is called ." << DEF << std::endl;
}
