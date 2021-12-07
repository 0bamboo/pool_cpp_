/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 20:57:18 by abdait-m          #+#    #+#             */
/*   Updated: 2021/12/07 16:36:27 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const &target)
    : Form("PresidentialPardonForm", PRESID_S, PRESID_E), _target_(target) { }

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &obj)
    :Form(obj), _target_(obj._target_) { }


void PresidentialPardonForm::action() const
{
    std::cout << std::endl << W << this->_target_ << " has been pardoned by Zafod Beeblebrox ." << DEF << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() { }
