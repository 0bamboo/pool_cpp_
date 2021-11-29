/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 17:01:28 by abdait-m          #+#    #+#             */
/*   Updated: 2021/11/29 17:08:27 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AMateria.hpp"

AMateria::AMateria() { }

std::string const& AMateria::getType() const 
{
	return (this->type);
}

void	AMateria::use (ICharacter& target) 
{
	(void)target;
}

AMateria::~AMateria() { }