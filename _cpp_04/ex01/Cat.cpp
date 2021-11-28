/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 16:00:31 by abdait-m          #+#    #+#             */
/*   Updated: 2021/11/28 01:57:17 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	this->_brain = new Brain();
	std::cout << Y << "The default constructer of Cat is called ." << DEF << std::endl;  
}

Cat::Cat(Cat const& copy)
{
	this->_brain = new Brain();
	
	*this->_brain = *copy._brain;
	this->type = copy.type;
	std::cout << Y << "The copy constructer of Cat is called ." << DEF << std::endl;
}

Cat&	Cat::operator = (Cat const& copy)
{
	this->_brain = new Brain();
	
	*this->_brain = *copy._brain;
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

void	Cat::_set_brain_(Brain& brain)
{
	this->_brain = &brain;
}

Brain&	Cat::_get_brain_()
{
	return (*this->_brain);
}

Cat::~Cat()
{
	delete _brain;
	std::cout << Y << "The destructer of Cat is called ." << DEF << std::endl;
}
