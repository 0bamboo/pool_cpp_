/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 17:57:10 by abdait-m          #+#    #+#             */
/*   Updated: 2021/11/29 20:28:56 by abdait-m         ###   ########.fr       */
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
	this->name = obj.name;
	this->count = obj.count;
	for(int i = 0;i < 4; i++)
	{
		if (this->array[i])
			delete array[i];
		this->array[i] = obj.array[i]->clone();
	}
}

Character&	Character::operator = (Character const& obj)
{
	this->name = obj.name;
	this->count = obj.count;
	for(int i = 0;i < 4; i++)
		this->array[i] = obj.array[i]->clone();
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
	if (array[idx] != NULL)
		array[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target)
{
	if (array[idx])
		array[idx]->use(target);
}