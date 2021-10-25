/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact_.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 16:05:57 by abdait-m          #+#    #+#             */
/*   Updated: 2021/10/25 20:12:19 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/_phonebook_.hpp"

Contact_::Contact_(){return ;}
Contact_::~Contact_(){return ;}

// SETTERS :

void	Contact_::_set_first_name_(std::string _fname_)
{
	this->_first_name_ = _fname_;
}

void	Contact_::_set_last_name_(std::string _lname_)
{
	this->_last_name_ = _lname_;
}

void	Contact_::_set_nickname_(std::string _nickname_)
{
	this->_nickname_ = _nickname_;
}

void	Contact_::_set_darkest_secret_(std::string _darkest_secret_)
{
	this->_darkest_secret_ = _darkest_secret_;
}

void	Contact_::_set_phone_nbr_(std::string _phone_nbr_)
{
	this->_phone_nbr_ = _phone_nbr_;
}

// GETTERS :

std::string Contact_::_get_first_name_(void)
{
	return (this->_first_name_);
}

std::string Contact_::_get_last_name_(void)
{
	return (this->_last_name_);
}

std::string Contact_::_get_nickname_(void)
{
	return (this->_nickname_);
}

std::string Contact_::_get_darkest_secret_(void)
{
	return (this->_darkest_secret_);
}

std::string	Contact_::_get_phone_nbr_(void)
{
	return (this->_phone_nbr_);
}
