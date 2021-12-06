/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 20:54:37 by abdait-m          #+#    #+#             */
/*   Updated: 2021/12/06 14:05:54 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Form.hpp"

Form::Form(const std::string& name, const unsigned int& signedGrade, const unsigned int& executeGrade)
	:_name_(name), _signed_(false), _Sgrade_(signedGrade), _Egrade_(executeGrade)
{
	try
	{
		if (signedGrade < HIGH_G || executeGrade < HIGH_G)
			throw GradeTooHighException("The grades of form " + name + " are too high . range [1 - 150].");
		else if (signedGrade > LOW_G || executeGrade > LOW_G)
			throw GradeTooLowException("The grades of form " + name + " are too low . range [1 - 150].");
		else
			std::cout << G << name << " Form is created successfully ." << DEF << std::endl;
	}
	catch(std::exception const& exc)
	{
		std::cout << R << name << " Form failed to create ." << DEF << std::endl;
		throw ;
	}
}

Form::Form(Form const& obj)
	:_name_(obj._name_), _signed_(obj._signed_), _Sgrade_(obj._Sgrade_), _Egrade_(obj._Egrade_) { }

std::string const&	Form::getName() const
{
	return (this->_name_);
}

unsigned int const&	Form::getSignGrade() const
{
	return (this->_Sgrade_);
}

unsigned int const&	Form::getExGrade() const
{
	return (this->_Egrade_);
}

bool const&				Form::_isSigned_() const
{
	return (this->_signed_);
}

void					Form::beSigned(Bureaucrat const& b)
{
	if (this->_Sgrade_ < b.getGrade())
		throw GradeTooLowException("Bureaucrat's grade is too low for signing the form");
	this->_signed_ = true;
}

// Attributes of nested classes :

//------GradeTooHighException-------- {

Form::GradeTooHighException::GradeTooHighException(std::string const& errorMsg):_error_(errorMsg) { }

const char*	Form::GradeTooHighException::what() const throw()
{
	return (_error_.c_str());
}

Form::GradeTooHighException::~GradeTooHighException() throw() { }

//---------------------------------- }

//------GradeTooLowException-------- {

Form::GradeTooLowException::GradeTooLowException(std::string const& errorMsg):_error_(errorMsg) { }

const char*	Form::GradeTooLowException::what() const throw()
{
	return (_error_.c_str());
}

Form::GradeTooLowException::~GradeTooLowException() throw() { }

//---------------------------------- }

std::ostream&	operator << (std::ostream& output, Form const& obj)
{
	output << obj.getName() << ", Form [ sign grade = " << obj.getSignGrade() << " ] with [ execute grade = " << obj.getExGrade() <<" ], and is" \
		<< (obj._isSigned_() == true ? " signed." : " not signed.") << std::endl;
	return (output);
}

Form::~Form() { }