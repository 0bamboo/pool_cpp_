/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 20:38:22 by abdait-m          #+#    #+#             */
/*   Updated: 2021/12/06 22:14:20 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"

class	Intern{

	private:
		Intern&	operator = (Intern const& obj);
		Intern(Intern const& obj);
	
	public:
		Intern();
		~Intern();

		Form*	makeForm(std::string const& type, std::string const& target);
		
		class	IfnotFoundException : public std::exception{
			
			public:
				const char*	what() const throw();
		};

};

Form*	create_shrubb(std::string const& target);
Form*	create_presid(std::string const& target);
Form*	create_roboto(std::string const& target);
typedef Form*	(*formPtr)(std::string const& target);

#endif
