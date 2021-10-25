/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook_.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 19:27:08 by abdait-m          #+#    #+#             */
/*   Updated: 2021/10/25 20:02:32 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_
# define PHONEBOOK_

# include "_phonebook_.hpp"

#define MAX_C 8

class PhoneBook_{

	private:
		Contact_		PhoneBook[MAX_C];
		

	public:
		PhoneBook_();
		Contact_	_add_contact_(void);
		void		_menu_(void);
		std::string	_fix_width_(std::string str);
		void		_print_contact_(int index);
		void		_search_(void);
		void		_set_ph_contact_(int index);
		~PhoneBook_();
};

#endif
