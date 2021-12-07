/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 20:54:11 by abdait-m          #+#    #+#             */
/*   Updated: 2021/12/07 17:24:27 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	std::string bname = "b1";
	unsigned int sign1 = 55;
	// unsigned int sign2 = 1;
	try
	{
		Bureaucrat	b1(bname, sign1);
		// Bureaucrat	b2(bname, sign2);
		
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

		// test execute attribute :
		// Form	*test = new PresidentialPardonForm("ralf");

		// test->beSigned(b2);
		// test->execute(b1);
		
		std::string b = "bureau";
		unsigned int bb = 145;
		Bureaucrat	test1(b, bb);

		test1.executeForm(presid);

	}
	catch(const std::exception& e)
	{
		std::cout << std::endl<<R<< e.what() <<DEF<< '\n';
	}

	std::cout << "END ! " << std::endl;
	
}