/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 17:29:11 by abdait-m          #+#    #+#             */
/*   Updated: 2021/12/04 19:40:36 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Ice.hpp"

Ice::Ice() 
{
	this->type = "ice";
}

Ice::Ice(Ice const& obj):AMateria(obj)
{ }

Ice&	Ice::operator = (Ice const& obj)
{
	*(AMateria *)this = obj;
	return (*this);
}

std::string const& Ice::getType() const
{
	return (this->type);
}

AMateria*	Ice::clone() const
{
	return (new Ice());
}

void		Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice::~Ice() 
{
}