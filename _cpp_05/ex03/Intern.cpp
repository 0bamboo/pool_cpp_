/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 21:04:52 by abdait-m          #+#    #+#             */
/*   Updated: 2021/12/06 22:31:20 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{ }

Form *Intern::makeForm(std::string const &type, std::string const &target)
{
	std::string array[3] = {"robotomy request", "presidential pardon", "shrubbery request"};
	formPtr forms[3] = {create_roboto, create_presid, create_shrubb};
	
	for (int i = 0; i < 3; i++)
		if (type == array[i])
			return (forms[i](target));
	throw IfnotFoundException();
}

const char *Intern::IfnotFoundException::what() const throw()
{
	return ("Form type not found .");
}

Intern::~Intern()
{
}

Form*	create_presid(std::string const& target)
{
	return (new PresidentialPardonForm(target));
}

Form*	create_shrubb(std::string const& target)
{
	return (new ShrubberyCreationForm(target));
}

Form*	create_roboto(std::string const& target)
{
	return (new RobotomyRequestForm(target));
}

