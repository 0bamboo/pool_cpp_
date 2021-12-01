/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 21:43:20 by abdait-m          #+#    #+#             */
/*   Updated: 2021/12/01 18:31:52 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	materials[0] = nullptr;
	materials[1] = nullptr;
	materials[2] = nullptr;
	materials[3] = nullptr;
}

MateriaSource::MateriaSource(MateriaSource const& obj) 
{
	*this = obj;
}

MateriaSource&	MateriaSource::operator = (MateriaSource const& obj)
{
	for (int i = 0; i < Max_Materials; i++)
	{
		delete this->materials[i];
		this->materials[i] = nullptr; 
		if (obj.materials[i])
			this->materials[i] = obj.materials[i]->clone();
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria *materia)
{
	int	i = -1;
	if (materia)
		while (materials[++i]) ;
	if (i >= 0 && i < Max_Materials)
		materials[i] = materia;
	else if (!materia)
		std::cout << "Wrong Materia !\n";
	else
	{
		std::cout << "Inventory is full .\n";
		delete materia;
		materia = nullptr;
	}
}

AMateria*	MateriaSource::createMateria(std::string const& type)
{
	for (int i = 0; i < Max_Materials; i++)
	{
		if (type == materials[i]->getType())
			return (materials[i]->clone());
	}
	return (nullptr);
}

MateriaSource::~MateriaSource()
{
	int i = 0;

	while (this->materials[i])
	{
		delete this->materials[i++];
	}
}
