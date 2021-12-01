/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 15:56:18 by abdait-m          #+#    #+#             */
/*   Updated: 2021/12/01 02:11:10 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"

Animal::Animal()
{
	this->type = "animal";
	std::cout << Y << "The default constructer of Animal is called ." << DEF << std::endl;  
}

Animal::Animal(Animal const& copy)
{
	*this = copy;
	std::cout << Y << "The copy constructer of Animal is called ." << DEF << std::endl;
}

Animal&	Animal::operator = (Animal const& copy)
{
	this->type = copy.type;
	std::cout << Y << "The assignment operator of Animal is called ." << DEF << std::endl;
	return  (*this);
}

Animal::~Animal()
{
	std::cout << Y << "The destructer of Animal is called ." << DEF << std::endl;
}
