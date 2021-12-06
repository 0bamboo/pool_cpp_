/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 20:54:42 by abdait-m          #+#    #+#             */
/*   Updated: 2021/12/06 11:04:05 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class	Form{
	
	private:
		Form();
		Form&	operator = (const Form& obj);
		const std::string	_name_;
		bool				_signed_;
		const unsigned int	_Sgrade_;
		const unsigned int	_Egrade_;
	
	public:
		Form(const std::string& name, const unsigned int& signedGrade, const unsigned int& executeGrade);
		Form(const Form& obj);
		~Form();

		// GEtters :
		std::string const&	getName() const;
		unsigned int const&	getSignGrade() const;
		unsigned int const&	getExGrade() const;
		bool const&				_isSigned_() const;

		void				beSigned(Bureaucrat const& b);

		// Nested classes for exceptions :
		class	GradeTooHighException : public std::exception{

			private:
				std::string const	_error_;
			
			public:
				GradeTooHighException(std::string const& errorMsg);
				~GradeTooHighException() throw();

				const char*	what() const throw();
		};

		class	GradeTooLowException : public std::exception{
			
			private:
				std::string const	_error_;
			
			public:
				GradeTooLowException(std::string const& errorMsg);
				~GradeTooLowException() throw();

				const char*	what() const throw();
		};
};

std::ostream&	operator << (std::ostream& output, const Form& obj);

#endif
