/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 22:15:12 by abdait-m          #+#    #+#             */
/*   Updated: 2021/11/28 02:23:42 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Brain.hpp"

Brain::Brain()
{
	this->count_ideas = 0;
	std::cout << Y << "The default constructer of Brain is called ." << DEF << std::endl;
}

Brain::Brain(Brain const& obj)
{
	int	i = -1;
	
	if (this != &obj)
	{
		this->count_ideas = obj.count_ideas;
		while (++i < obj.count_ideas)
			this->ideas[i] = obj.ideas[i];
	}
	std::cout << Y << "The copy constructer of Brain is called ." << DEF << std::endl;
}

Brain&	Brain::operator = (Brain const& obj)
{
	int	i = -1;
	
	if (this != &obj)
	{
		this->count_ideas = obj.count_ideas;
		while (++i < obj.count_ideas)
			this->ideas[i] = obj.ideas[i];
	}
	std::cout << Y << "The assignment operator of Brain is called ." << DEF << std::endl;
	return (*this);
}

std::string	Brain::_get_idea_(int number)
{
	if (number < count_ideas)
		return (this->ideas[number]);
	else
		return ("<no idea>");
}

void	Brain::_set_idea_(std::string idea)
{
	if (count_ideas == 100)
		count_ideas = 0;
	this->ideas[count_ideas++] = idea;
}

Brain::~Brain()
{
	std::cout << Y << "The destructer of Brain is called ." << DEF << std::endl;
}
