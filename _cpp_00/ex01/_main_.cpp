/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _main_.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 14:15:34 by abdait-m          #+#    #+#             */
/*   Updated: 2021/10/25 20:02:42 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers/_phonebook_.hpp"

int main()
{
	// Contact_	PhoneBook[MAX_C];
	PhoneBook_	_Pbook;
	std::string	command;
	int			count;

	_Pbook._menu_();
	count = 0;
	while (true)
	{
		std::cout << "> ";
		std::getline(std::cin, command);
		if (command == "ADD")
			_Pbook._set_ph_contact_(count % 8);
		else if (command == "SEARCH")
			_Pbook._search_();
		else if (command == "EXIT")
			break;
	}
}