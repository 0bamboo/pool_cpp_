/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 17:17:22 by abdait-m          #+#    #+#             */
/*   Updated: 2021/12/01 10:31:01 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cure.hpp"

Cure::Cure() 
{
	this->type = "cure";
}

Cure::Cure(Cure const& obj)
{
	this->type = obj.type;
}

Cure&	Cure::operator = (Cure const& obj)
{
	this->type = obj.type;
	return (*this);
}

std::string const& Cure::getType() const
{
	return (this->type);
}

AMateria*	Cure::clone() const
{
	return (new Cure());
}

void		Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

Cure::~Cure() 
{
}