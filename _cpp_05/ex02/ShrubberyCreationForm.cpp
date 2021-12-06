/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 20:57:29 by abdait-m          #+#    #+#             */
/*   Updated: 2021/12/06 11:49:11 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string const& target)
	:Form("ShrubberyCreationForm", REQUIRED_S, REQUIRED_E)
{ }

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &b)
	:Form(b.getName(), b.getSignGrade(), b.getExGrade())
{ }

void	ShrubberyCreationForm::action()const
{
	std::string fname = _target_ + "_shrubbery";
	std::ofstream file;
	
	file.open(fname, std::fstream::in | std::fstream::out | std::fstream::trunc);
	file << "               ,#######,"  << std::endl;
	file << "       ,,,.   ,######/##,  .ooOOOOo."  << std::endl;
	file << "    ,^^%^^%,#####/######,OOOO**OO/Oo"  << std::endl;
	file << "   ,%^^^%^^%^^%,########/###OO**OOOOO/OO'"  << std::endl;
	file << "   %^^%^%^/%^^%##II##/ /###OOOOOOOOOO'"  << std::endl;
	file << "   %^^;;;;^;;^^##\\ V /##' OOOOOOO'"  << std::endl;
	file << "   &%;;;;;;/;&'   |.|         | |'|8'"  << std::endl;
	file << "       |o|        | |         | |"  << std::endl;
	file << "       |.|        | |         | |"  << std::endl;
	file << "    \\/ .\\////  ,\\_//\\/.  \\//__/ "  << std::endl;
	
	file.close();
}

ShrubberyCreationForm::~ShrubberyCreationForm() { }
