/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _Contact_.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 16:06:12 by abdait-m          #+#    #+#             */
/*   Updated: 2021/10/22 16:22:40 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CONTACT_

# define _CONTACT_

#include "_phonebook_.hpp"

class _Contact_{
	
	public:
		std::string	_first_name_;
		std::string	_last_name_;
		std::string	_nickname_;
		std::string	_darkest_secret_;
		int			_phone_nbr_;

		int _func_(int a);
};

#endif