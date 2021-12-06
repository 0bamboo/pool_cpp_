/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 20:54:05 by abdait-m          #+#    #+#             */
/*   Updated: 2021/12/06 10:54:52 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat():_name_(""), _grade_(0) { }

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
		std::cout << R << "Constructor failed for Bureaucrat" + _name_ << DEF << std::endl;
		throw;
	}
}

Bureaucrat::Bureaucrat(Bureaucrat const& copy):_name_(copy._name_), _grade_(copy._grade_) { }

Bureaucrat&	Bureaucrat::operator = (Bureaucrat const& copy)
{ 
	this->_grade_ = copy._grade_;
	return (*this);
}

std::string const&	Bureaucrat::getName() const
{
	return (this->_name_);
}

const unsigned int&	Bureaucrat::getGrade() const
{
	return (this->_grade_);
}

void	Bureaucrat::incrementGrade()
{
	if (this->_grade_ == HIGH_G)
		throw GradeTooHighException();
	this->_grade_--;
}

void	Bureaucrat::decrementGrade()
{
	if (this->_grade_ == LOW_G)
		throw GradeTooLowException();
	this->_grade_++;
}

void	Bureaucrat::signForm(Form& f)
{
	try
    {
        f.beSigned(*this);
        std::cout << this->_name_ << " sign " << f.getName() << std::endl;
    }
    catch(const std::exception& exc)
    {
        std::cout << R << this->_name_ <<  " cannot sign " << f.getName() << " because " << exc.what() << DEF << std::endl;
        throw ;
	}
}

// Attributes of nested classes :

//------GradeTooHighException-------- {

// Bureaucrat::GradeTooHighException::GradeTooHighException() { }

const char*	Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("\033[1;31mThe grade of bureaucrat is too high . Range : [1 - 150]\033[0;37m\n");
}

// Bureaucrat::GradeTooHighException::~GradeTooHighException() { }

//---------------------------------- }

//------GradeTooLowException-------- {

// Bureaucrat::GradeTooLowException::GradeTooLowException() { }

const char*	Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("\033[1;31mThe grade of bureaucrat is too Low . Range : [1 - 150]\033[0;37m\n");
}

// Bureaucrat::GradeTooLowException::~GradeTooLowException() { }

//---------------------------------- }

std::ostream& operator << (std::ostream& output, Bureaucrat const& obj)
{
	output << obj.getName() << ", Bureaucrat grade " << obj.getGrade() << std::endl;
	return (output);
}

Bureaucrat::~Bureaucrat() { }
