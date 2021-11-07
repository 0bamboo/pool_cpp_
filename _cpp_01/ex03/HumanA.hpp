/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 13:20:48 by abdait-m          #+#    #+#             */
/*   Updated: 2021/11/07 13:20:48 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA
#define HUMANA

#include "Weapon.hpp"

class HumanA{

	private:
		Weapon		&weapon;
		std::string	name;

	public:
		HumanA(std::string _name_, Weapon &_weapon_);
		~HumanA();
		void	attack(void);
};

#endif
