/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 21:23:16 by abdait-m          #+#    #+#             */
/*   Updated: 2021/11/06 21:23:16 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->name = name;
}

Zombie::~Zombie(void)
{
	std::cout << "Zombie " << this->name << " is deleted ." << std::endl;
}

void		Zombie::announce(void)
{
	std::cout << "<" << this->name << "> BraiiiiiiinnnzzzZ..." << std::endl;
}
