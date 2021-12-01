/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 17:57:10 by abdait-m          #+#    #+#             */
/*   Updated: 2021/12/01 08:37:20 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Character.hpp"
# include <vector>


Character::Character()
{
	this->name = "unknown";
	this->count = 0;
	array[0] = NULL;
	array[1] = NULL;
	array[2] = NULL;
	array[3] = NULL;
}

Character::Character(std::string name)
{
	this->name = name;
	this->count = 0;
	array[0] = NULL;
	array[1] = NULL;
	array[2] = NULL;
	array[3] = NULL;
}

Character::Character(Character const& obj)
{
	*this = obj;
}

Character&	Character::operator = (Character const& obj)
{
	this->name = obj.name;
	this->count = obj.count;
	for(int i = 0;i < 4; i++)
	{
		delete array[i];
		this->array[i] = obj.array[i]->clone();
	}
	return (*this);
}

std::string const&	Character::getName() const
{
	return (this->name);
}

void	Character::equip(AMateria *m)
{
	if (count < 4)
		array[count++] = m;
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
		if (array[idx] != NULL)
			array[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4)
		if (array[idx])
			array[idx]->use(target);
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		delete array[i];
		array[i] = NULL;
	}
}
