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
	
	private:
		std::string	_first_name_;
		std::string	_last_name_;
		std::string	_nickname_;
		std::string	_darkest_secret_;
		std::string _phone_nbr_;

	public:
		Contact_(void);
		void		_set_first_name_(std::string _fname_);
		void		_set_last_name_(std::string _lname_);
		void		_set_nickname_(std::string _nickname_);
		void		_set_darkest_secret_(std::string _darkest_secret_);
		void		_set_phone_nbr_(std::string _phone_nbr_);
		std::string	_get_first_name_(void);
		std::string	_get_last_name_(void);
		std::string	_get_nickname_(void);
		std::string	_get_darkest_secret_(void);
		std::string	_get_phone_nbr_(void);
		~Contact_(void);
};

#endif