#include "headers/_phonebook_.hpp"

void	_menu_(int& count)
{
	count = 0;
	std::cout << " ------- WELCOME -------" << std::endl;
	std::cout << "|----- WELCOME -------" << std::endl;
}

Contact_	_add_contact_(void)
{
	Contact_	new_c;
	std::string _input_;

	std::cout << "Enter First Name > ";
	std::cin >> _input_;
	new_c._set_first_name_(_input_);

	std::cout << "Enter Last Name > ";
	std::cin >> _input_;
	new_c._set_last_name_(_input_);

	std::cout << "Enter NickName > ";
	std::cin >> _input_;
	new_c._set_nickname_(_input_);

	std::cout << "Enter Darkest Secret > ";
	std::cin >> _input_;
	new_c._set_darkest_secret_(_input_);

	std::cout << "Enter Phone Number > ";
	std::cin >> _input_;
	new_c._set_phone_nbr_(_input_);

	return (new_c);
}

std::string	_fix_width_(std::string str)
{
	std::string _ret;

	_ret = str.erase(9, str.length() - 11);
	_ret.append(".");
	return (_ret);
}

void	_print_contact_(Contact_ PhoneBook[], int index)
{
	int	_ind;

	std::cout << "Enter The Index > ";
	std::cin >> _ind;
	if (_ind < index && _ind >= 0)
	{
		std::cout << "First Name     : " << PhoneBook[_ind]._get_first_name_() << std::endl;
		std::cout << "Last Name      : "<< PhoneBook[_ind]._get_last_name_() << std::endl;
		std::cout << "NickName       : "<< PhoneBook[_ind]._get_nickname_() << std::endl;
		std::cout << "Darkest Secret : "<< PhoneBook[_ind]._get_darkest_secret_() << std::endl;
		std::cout << "Phone Number   : "<< PhoneBook[_ind]._get_phone_nbr_() << std::endl;
	}
	else
	{
		std::cout << "----- Wrong Index . -----" << std::endl;
	}
}

void	_search_(Contact_ PhoneBook[])
{
	std::string	_check;
	std::string	_copy;
	int	index;

	std::cout << "|     Index|First Name| Last Name| Nickname |" << std::endl;
	index = -1;
	while (++index < MAX_C)
	{
		std::cout<< "|" << std::setw(MAX_WIDTH);
		std::cout<< index;

		std::cout<< "|" << std::setw(MAX_WIDTH);
		_copy = PhoneBook[index]._get_first_name_();
		_check = _copy.length() > MAX_WIDTH ? _fix_width_(_copy) : \
			_copy;

		std::cout<< "|" << std::setw(MAX_WIDTH);
		_copy = PhoneBook[index]._get_first_name_();
		_check = _copy.length() > MAX_WIDTH ? _fix_width_(_copy) : \
			_copy;

		std::cout<< "|" << std::setw(MAX_WIDTH);
		_copy = PhoneBook[index]._get_first_name_();
		_check = _copy.length() > MAX_WIDTH ? _fix_width_(_copy) : \
			_copy;
		std::cout<< "|" << std::endl;
	}
	_print_contact_(PhoneBook, index);
}