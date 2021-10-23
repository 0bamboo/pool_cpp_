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


// the commands :  ADD SEARCH EXIT .

// max conatact to store is 8
// the ninth contact is replaced the oldest
// ADD : 
//		first_name, last_name, nickname, phone_number, darkest_secret
void reference(int& a)
{
	a++;
}

int	main(int argc, char **argv)
{
	Phone_Book_ phone_book;
	Contact_ new_c;
	std::string	command;
	
	while (1)
	{
		std::cout << "> ";
		std::cin >> command;
		if (command == "ADD")
			std::cout << "ADD" << std::endl;
		else if (command == "SEARCH")
			std::cout << "SEARCH" << std::endl;
		else if (command == "EXIT")
			break ;
		std::cout << command << std::endl;
	}
}