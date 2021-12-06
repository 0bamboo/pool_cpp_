/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 20:54:11 by abdait-m          #+#    #+#             */
/*   Updated: 2021/12/06 20:28:38 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	try
	{
		std::cout << std::endl;
		ShrubberyCreationForm shrubbery("abdennacer");
		shrubbery.action();

		std::cout << std::endl;
		PresidentialPardonForm presid("omar");
		presid.action();

		std::cout << std::endl;
		RobotomyRequestForm	robot("amine");
		robot.action();
		std::cout << std::endl;

		Form	test("achraf", 1, 166);
	}
	catch(const std::exception& e)
	{
		std::cout <<std::endl<<R<< e.what() <<DEF<< '\n';
	}
	
}