/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 20:54:05 by abdait-m          #+#    #+#             */
/*   Updated: 2021/12/04 22:07:44 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const& name, unsigned int& grade):_name_(name)
{
	try
	{
		if (grade < HIGH_G)
			throw GradeTooHighException();
		else if (grade > LOW_G)
			throw GradeTooLowException();
		else
			this->_grade_ = grade;
	}
	catch(const std::exception& exc)
	{
		std::cout << "Constructor failed for Bureaucrat" + _name_ << std::endl;
		throw;
	}
}

Bureaucrat::Bureaucrat(Bureaucrat const& copy):_name_(copy._name_), _grade_(copy._grade_) { }

std::string const&	getName() const
{
	return (this->_name_);
}

unsigned int&	getGrade() const
{
	return (this->_grade_);
}

Bureaucrat::incrementGrade()
{
	if (this->_grade_ == HIGH_G)
		throw GradeTooHighException();
	this->_grade_--;
}

Bureaucrat::decrementGrade()
{
	if (this->_grade_ == LOW_G)
		throw GradeTooLowException();
	this->_grade_++;
}

// Attributes of nested classes :

//------GradeTooHighException-------- {

Bureaucrat::GradeTooHighException::GradeTooHighException() { }

const char*	Bureaucrat::GradeTooHighException::what() const throw()
{
	return (R + "The grade of bureaucrat is too high . Range : [1 - 150]\n" + DEF);
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() { }

//---------------------------------- }

//------GradeTooLowException-------- {

Bureaucrat::GradeTooLowException::GradeTooLowException() { }

const char*	Bureaucrat::GradeTooLowException::what() const throw()
{
	return (R + "The grade of bureaucrat is too Low . Range : [1 - 150]\n" + DEF);
}

Bureaucrat::GradeTooLowException::~GradeTooLowException() { }

//---------------------------------- }

std::ostream& operator << (std::ostream& output, Bureaucrat const& obj)
{
	ouput << obj.geName() << ", Bureaucrat grade " << obj.getGrade() << std::endl;
	return (output);
}

Bureaucrat::~Bureaucrat() { }