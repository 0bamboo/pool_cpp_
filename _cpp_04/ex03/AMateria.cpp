/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 17:01:28 by abdait-m          #+#    #+#             */
/*   Updated: 2021/11/30 22:26:01 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AMateria.hpp"

AMateria::AMateria() { }

AMateria::AMateria(std::string const& type)
{
	this->type = type;
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