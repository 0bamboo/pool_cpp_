/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _main_.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 14:15:34 by abdait-m          #+#    #+#             */
/*   Updated: 2021/10/27 18:00:17 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers/_phonebook_.hpp"

int main()
{
	PhoneBook_	_Pbook;
	std::string	command;
	int			count;

	_Pbook._menu_();
	count = 0;
	
	std::cout << "> ";
	while (std::getline(std::cin, command))
	{
		if (command == "ADD")
			_Pbook._set_ph_contact_(count++ % 8);
		else if (command == "SEARCH")
			_Pbook._search_();
		else if (command == "EXIT")
			break;
		std::cout << "> ";
	}
}