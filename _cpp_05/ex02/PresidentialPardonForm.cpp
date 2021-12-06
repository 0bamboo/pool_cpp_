/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 20:57:18 by abdait-m          #+#    #+#             */
/*   Updated: 2021/12/06 11:26:47 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const &target)
    : Form("PresidentialPardonForm", REQUIRED_S, REQUIRED_E), _target_(target) { }

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &obj)
    :Form(obj), _target_(obj._target_) { }

PresidentialPardonForm::~PresidentialPardonForm() { }

void PresidentialPardonForm::action() const
{
    std::cout << G << this->_target_ << " has been pardoned by Zafod Beeblebrox ." << DEF << std::endl;
}
