/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 20:57:32 by abdait-m          #+#    #+#             */
/*   Updated: 2021/12/06 20:18:54 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <fstream>

#define SHRUBB_S 145 
#define SHRUBB_E 137

class ShrubberyCreationForm : public Form{
	
	private:
		ShrubberyCreationForm();
		ShrubberyCreationForm &operator=(ShrubberyCreationForm const &obj);
		std::string const _target_;

	public:
		ShrubberyCreationForm(std::string const &target);
		ShrubberyCreationForm(ShrubberyCreationForm const &obj);
		~ShrubberyCreationForm();

		void	action() const;

};


#endif