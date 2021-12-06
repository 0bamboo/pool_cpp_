/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 20:57:27 by abdait-m          #+#    #+#             */
/*   Updated: 2021/12/06 11:55:03 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

#define REQUIRED_S 72 
#define REQUIRED_E 45

class RobotomyRequestForm : public Form{
	
	private:
		RobotomyRequestForm();
		RobotomyRequestForm& operator=(RobotomyRequestForm const& obj);
		std::string const _target_;

	public:
		RobotomyRequestForm(std::string const& target);
		RobotomyRequestForm(RobotomyRequestForm const& obj);
		~RobotomyRequestForm();

		void action() const;
};

#endif