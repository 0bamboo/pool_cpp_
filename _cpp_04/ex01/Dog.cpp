/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 16:00:36 by abdait-m          #+#    #+#             */
/*   Updated: 2021/11/29 20:14:03 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	this->_brain = new Brain();
	std::cout << Y << "The default constructer of Dog is called ." << DEF << std::endl;  
}

Dog::Dog(Dog const& copy)
{
	this->_brain = new Brain();
	
	*this->_brain = *copy._brain;
	this->type = copy.type;
	std::cout << Y << "The copy constructer of Dog is called ." << DEF << std::endl;
}

Dog&	Dog::operator = (Dog const& copy)
{
	*this->_brain = *copy._brain;
	this->type = copy.type;
	std::cout << Y << "The assignment operator of Dog is called ." << DEF << std::endl;
	return  (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Dog is barking !!" << std::endl;
}

std::string	Dog::getType() const
{
	return (this->type);
}

void	Dog::_set_brain_(Brain& brain)
{
	this->_brain = &brain;
}

Brain&	Dog::_get_brain_()
{
	return (*this->_brain);
}

Dog::~Dog()
{
	delete _brain;
	std::cout << Y << "The destructer of Dog is called ." << DEF << std::endl;
}
