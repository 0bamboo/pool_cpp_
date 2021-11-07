/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 13:21:05 by abdait-m          #+#    #+#             */
/*   Updated: 2021/11/07 13:21:05 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON
#define WEAPON

# include <iostream>
#include <cstddef>

class Weapon{

	private:
		std::string	type;

	public:
		Weapon(std::string type);
		~Weapon(void);
		const std::string&	getType(void);
		void				setType(std::string type);
};

#endif
