/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 17:01:28 by abdait-m          #+#    #+#             */
/*   Updated: 2021/12/04 19:37:19 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AMateria.hpp"

AMateria::AMateria() { }

AMateria::AMateria(std::string const& type):type(type)
{ }

AMateria::AMateria(AMateria const& copy)
{
	this->type = copy.type;
}

AMateria&	AMateria::operator = (AMateria const& copy)
{
	this->type = copy.type;
	return (*this);
}

std::string const& AMateria::getType() const 
{
	return (this->type);
}

void	AMateria::use (ICharacter& target) 
{
	(void)target;
}

AMateria::~AMateria() { }