/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 16:00:31 by abdait-m          #+#    #+#             */
/*   Updated: 2021/11/21 17:22:22 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	std::cout << Y << "The default constructer of Cat is called ." << DEF << std::endl;  
}

Cat::Cat(Cat const& copy)
{
	*this = copy;
	std::cout << Y << "The copy constructer of Cat is called ." << DEF << std::endl;
}

Cat&	Cat::operator = (Cat const& copy)
{
	this->type = copy.type;
	std::cout << Y << "The assignment operator of Cat is called ." << DEF << std::endl;
	return  (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Meow Meow Meow !!" << std::endl;
}

std::string	Cat::getType() const
{
	return (this->type);
}

Cat::~Cat()
{
	std::cout << Y << "The destructer of Cat is called ." << DEF << std::endl;
}
