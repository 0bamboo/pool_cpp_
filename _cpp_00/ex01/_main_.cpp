/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _main_.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 14:15:34 by abdait-m          #+#    #+#             */
/*   Updated: 2021/10/22 16:18:02 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers/_phonebook_.hpp"


// the commands :  ADD SEARCH EXIT .

// max conatact to store is 8
// the ninth contact is replaced the oldest
// ADD : 
//		first_name, last_name, nickname, phone_number, darkest_secret

int	main(int argc, char **argv)
{
	_Contact_ insta;

	insta._first_name_ = "hello";
	std::cout << insta._first_name_;
}