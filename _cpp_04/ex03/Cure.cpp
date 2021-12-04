/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 17:17:22 by abdait-m          #+#    #+#             */
/*   Updated: 2021/12/04 19:39:54 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cure.hpp"

Cure::Cure() 
{
	this->type = "cure";
}

Cure::Cure(Cure const& obj):AMateria(obj)
{ }

Cure&	Cure::operator = (Cure const& obj)
{
	*(AMateria *)this = obj;
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