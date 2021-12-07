/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 20:57:24 by abdait-m          #+#    #+#             */
/*   Updated: 2021/12/07 16:42:37 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) 
	: Form("RobotomyRequestForm", ROBOT_S, ROBOT_E) , _target_(target) { }

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &obj) :Form(obj), _target_(obj._target_) { }

RobotomyRequestForm::~RobotomyRequestForm() { }

void	RobotomyRequestForm::action() const
{
    srand(time(0));
    int _rnum_ =  rand();
    
	std::cout << std::endl << W << "!!!!---------****** WEIRD NOISE ******--------!!!!" << std::endl;
	if (_rnum_ % 2 == 0)
        std::cout <<"[ "<< this->_target_ << " ]" << " has been robotomized successfully" << std::endl;
    else
        std::cout << "[ "<< this->_target_ << " ]" << " failed to robotomize" << DEF << std::endl;
}
