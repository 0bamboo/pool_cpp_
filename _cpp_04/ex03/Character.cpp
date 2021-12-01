/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 17:57:10 by abdait-m          #+#    #+#             */
/*   Updated: 2021/12/01 18:35:20 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Character.hpp"


Character::Character():name(""), count(0)
{
	array[0] = nullptr;
	array[1] = nullptr;
	array[2] = nullptr;
	array[3] = nullptr;
}

Character::Character(std::string name):name(name), count(0)
{
	array[0] = nullptr;
	array[1] = nullptr;
	array[2] = nullptr;
	array[3] = nullptr;
}

Character::Character(Character const& obj)
{
	*this = obj;
}

Character&	Character::operator = (Character const& obj)
{
	this->name = obj.name;
	this->count = obj.count;
	for(int i = 0;i < Max_Materials; i++)
	{
		delete array[i];
		array[i] = nullptr;
		if (obj.array[i])
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
	if (count < Max_Materials)
		array[count++] = m;
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx < Max_Materials)
		if (array[idx] != nullptr)
			array[idx] = nullptr;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < Max_Materials)
		if (array[idx])
			array[idx]->use(target);
}

Character::~Character()
{
	for (int i = 0; i < Max_Materials; i++)
	{
		delete array[i];
	}
}
