/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _Contact_.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 16:06:12 by abdait-m          #+#    #+#             */
/*   Updated: 2021/10/23 14:57:14 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_

# define CONTACT_

#include "_phonebook_.hpp"

class Contact_{
	
	public:
		std::string	_first_name_;
		std::string	_last_name_;
		std::string	_nickname_;
		std::string	_darkest_secret_;
		int			_phone_nbr_;

		int _func_(int a);
};

#endif