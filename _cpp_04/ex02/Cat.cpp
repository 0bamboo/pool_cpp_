/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 16:00:31 by abdait-m          #+#    #+#             */
/*   Updated: 2021/12/04 19:21:28 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	this->_brain = new Brain();
	std::cout << Y << "The default constructer of Cat is called ." << DEF << std::endl;
}

Cat::Cat(Cat const &copy):Animal(copy)
{
	this->_brain = new Brain(copy._get_brain_());
	
	std::cout << Y << "The copy constructer of Cat is called ." << DEF << std::endl;
}

Cat &Cat::operator=(Cat const &copy)
{
	*(Animal *)this = copy;
	
	delete this->_brain;
	this->_brain = new Brain(copy._get_brain_());
	
	std::cout << Y << "The assignment operator of Cat is called ." << DEF << std::endl;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Meow Meow Meow !!" << std::endl;
}

std::string Cat::getType() const
{
	return (this->type);
}

void Cat::_set_brain_(Brain &brain)
{
	delete this->_brain;
	this->_brain = new Brain(brain);
}

Brain&	Cat::_get_brain_() const
{
	return (*this->_brain);
}

Cat::~Cat()
{
	delete _brain;
	std::cout << Y << "The destructer of Cat is called ." << DEF << std::endl;
}
