/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook_.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 19:36:23 by abdait-m          #+#    #+#             */
/*   Updated: 2021/10/28 16:32:46 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/_phonebook_.hpp"

PhoneBook_::PhoneBook_() 
{
	this->count = 0; 
	return;
}

PhoneBook_::~PhoneBook_() { return; }

void PhoneBook_::_set_ph_contact_(int index)
{
	this->PhoneBook[index] = _add_contact_();
}

void PhoneBook_::_menu_(void)
{
	std::cout << " ------------------------------------ " << std::endl;
	std::cout << "| Welcome to the Phonebook Program  |" << std::endl;
	std::cout << "|         Usable commands :          |" << std::endl;
	std::cout << "|             1 -> ADD               |" << std::endl;
	std::cout << "|             2 -> SEARCH            |" << std::endl;
	std::cout << "|             3 -> EXIT              |" << std::endl;
	std::cout << " ------------------------------------ " << std::endl;
}

Contact_ PhoneBook_::_add_contact_(void)
{
	Contact_ new_c;
	std::string _input_;

	std::cout << "Enter First Name > ";
	std::getline(std::cin, _input_);
	new_c._set_first_name_(_input_);

	std::cout << "Enter Last Name > ";
	std::getline(std::cin, _input_);
	new_c._set_last_name_(_input_);

	std::cout << "Enter NickName > ";
	std::getline(std::cin, _input_);
	new_c._set_nickname_(_input_);

	std::cout << "Enter Darkest Secret > ";
	std::getline(std::cin, _input_);
	new_c._set_darkest_secret_(_input_);

	std::cout << "Enter Phone Number > ";
	std::getline(std::cin, _input_);
	new_c._set_phone_nbr_(_input_);
	
	if (this->count >= 7)
		this->count = 7; 
	this->count++;

	return (new_c);
}

std::string PhoneBook_::_fix_width_(std::string str)
{
	std::string _ret;

	_ret = str.erase(MAX_WIDTH - 1, str.length() - MAX_WIDTH + 1);
	_ret.append(".");
	return (_ret);
}

void PhoneBook_::_print_contact_(int index)
{
	std::string	ind;
	int			_ind;

	std::cout << "Enter The Index > ";
	std::getline(std::cin, ind);
	if (ind[0] >= '0' && ind[0] <= '9' && ind.length() == 1)
		_ind = std::stoi(ind);
	else
		_ind = -1;
	if (_ind < index && _ind >= 0)
	{
		std::cout << "First Name     : " << this->PhoneBook[_ind]._get_first_name_() << std::endl;
		std::cout << "Last Name      : " << this->PhoneBook[_ind]._get_last_name_() << std::endl;
		std::cout << "NickName       : " << this->PhoneBook[_ind]._get_nickname_() << std::endl;
		std::cout << "Darkest Secret : " << this->PhoneBook[_ind]._get_darkest_secret_() << std::endl;
		std::cout << "Phone Number   : " << this->PhoneBook[_ind]._get_phone_nbr_() << std::endl;
	}
	else
		std::cout << "----- Wrong Index . -----" << std::endl;
}

void PhoneBook_::_search_(void)
{
	std::string _check;
	std::string _copy;
	int index;

	std::cout << "|     Index|First Name| Last Name| Nickname |" << std::endl;
	index = -1;
	while (++index < this->count)
	{
		std::cout << "|" << std::setw(MAX_WIDTH);
		std::cout << index;

		std::cout << "|" << std::setw(MAX_WIDTH);
		_copy = this->PhoneBook[index]._get_first_name_();
		_check = _copy.length() > MAX_WIDTH ? _fix_width_(_copy) : _copy;
		std::cout << _check;

		std::cout << "|" << std::setw(MAX_WIDTH);
		_copy = this->PhoneBook[index]._get_last_name_();
		_check = _copy.length() > MAX_WIDTH ? _fix_width_(_copy) : _copy;
		std::cout << _check;

		std::cout << "|" << std::setw(MAX_WIDTH);
		_copy = this->PhoneBook[index]._get_nickname_();
		_check = _copy.length() > MAX_WIDTH ? _fix_width_(_copy) : _copy;
		std::cout << _check;
		std::cout << "|" << std::endl;
	}
	_print_contact_(index);
}
