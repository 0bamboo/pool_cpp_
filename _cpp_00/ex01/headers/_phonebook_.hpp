/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _phonebook_.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 14:16:50 by abdait-m          #+#    #+#             */
/*   Updated: 2021/10/25 19:37:17 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _PHONEBOOK_H

# define _PHONEBOOK_H

# include <iostream>
# include <iomanip>
# include <cstring>
# include "Contact_.hpp"
# include "PhoneBook_.hpp"
# define MAX_C 8
# define MAX_WIDTH 10

Contact_	_add_contact_(void);
std::string	_fix_width_(std::string str);
void		_search_(Contact_ PhoneBook[]);
void		_print_contact_(Contact_ PhoneBook[], int index);
void		_menu_(int& count);

#endif
