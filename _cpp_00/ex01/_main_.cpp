/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _main_.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 14:15:34 by abdait-m          #+#    #+#             */
/*   Updated: 2021/10/23 19:39:55 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers/_phonebook_.hpp"
#include "headers/Contact_.hpp"


// the commands :  ADD SEARCH EXIT .

// max conatact to store is 8
// the ninth contact is replaced the oldest
// ADD : 
//		first_name, last_name, nickname, phone_number, darkest_secret



int	main()
{
	Contact_ PhoneBook[MAX_C];
	std::string	command;
	int count;
	
	_menu_(count);
	while (true)
	{
		std::cout << "> ";
		std::cin >> command;
		if (command == "ADD")
		{
			if (count > 7)
				count = 0;
			PhoneBook[count++] = _add_contact_();
		}
		else if (command == "SEARCH")
			_search_(PhoneBook);
		else if (command == "EXIT")
			break ;
	}
}