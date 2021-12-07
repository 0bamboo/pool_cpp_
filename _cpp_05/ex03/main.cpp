/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 20:54:11 by abdait-m          #+#    #+#             */
/*   Updated: 2021/12/07 17:29:08 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Intern.hpp"

int main()
{
	try
	{
		Intern	test;
		Form	*form;
		
		form = test.makeForm("robotomy request", "Bender");
	}
	catch(const std::exception& e)
	{
		std::cout <<R<< e.what() <<DEF<< '\n';
	}
	
}