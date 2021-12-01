/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 21:43:20 by abdait-m          #+#    #+#             */
/*   Updated: 2021/12/01 10:44:16 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	materials[0] = NULL;
	materials[1] = NULL;
	materials[2] = NULL;
	materials[3] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const& obj) 
{
	for (int i = 0; i < 4; i++)
	{
		delete this->materials[i];
		if (obj.materials[i])
			this->materials[i] = obj.materials[i]->clone();
		else
			this->materials[i] = NULL; 
	}
}

MateriaSource&	MateriaSource::operator = (MateriaSource const& obj)
{
	for (int i = 0; i < 4; i++)
	{
		delete this->materials[i];
		if (obj.materials[i])
			this->materials[i] = obj.materials[i]->clone();
		else
			this->materials[i] = NULL; 
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria *materia)
{
	int	i = -1;
	if (materia)
		while (materials[++i]) ;
	if (i >= 0 && i < 4)
		materials[i] = materia;
	else if (!materia)
		std::cout << "Wrong Materia !\n";
	else
	{
		std::cout << "Inventory is full .\n";
		delete materia;
		materia = NULL;
	}
}

AMateria*	MateriaSource::createMateria(std::string const& type)
{
	for (int i = 0; i < 4; i++)
	{
		if (type == materials[i]->getType())
			return (materials[i]->clone());
	}
	return (NULL);
}

MateriaSource::~MateriaSource()
{
	int i = 0;

	while (this->materials[i])
	{
		delete this->materials[i];
		this->materials[i] = NULL;
		i++;
	}
}
