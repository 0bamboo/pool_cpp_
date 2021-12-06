/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 20:54:08 by abdait-m          #+#    #+#             */
/*   Updated: 2021/12/06 09:17:35 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <stdexcept>
# include <exception>
# include "Form.hpp"

# define Y "\033[1;33m"
# define S_B "\033[1;36m"
# define R "\033[1;31m"
# define G "\033[1;32m"
# define W "\033[1;37m"
# define DEF "\033[0;37m"

# define HIGH_G 1
# define LOW_G 150

class Form;

class	Bureaucrat{

	private:
		std::string const	_name_;
		unsigned int		_grade_;

	public:
		Bureaucrat();
		Bureaucrat(Bureaucrat const& copy);
		Bureaucrat(std::string const& name, unsigned int& grade);
		Bureaucrat& operator = (Bureaucrat const& copy);
		~Bureaucrat();

		// Getters :
		std::string const&	getName() const;
		unsigned int const&	getGrade() const;

		void			incrementGrade();
		void			decrementGrade();
		void			signForm(Form& f);

		// Nested classes for exceptions :

		class	GradeTooHighException : public std::exception{

			public:
				// GradeTooHighException();
				// ~GradeTooHighException() throw();

				const char*	what() const throw();
		};

		class	GradeTooLowException : public std::exception{

			public:
				// GradeTooLowException();
				// ~GradeTooLowException() throw();

				const char*	what() const throw();
		};


};

std::ostream&	operator << (std::ostream& output, const Bureaucrat& obj);

#endif
