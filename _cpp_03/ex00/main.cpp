/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 06:15:09 by abdait-m          #+#    #+#             */
/*   Updated: 2021/11/20 06:15:09 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

int main()
{
	ClapTrap obj2("abdennacer");

	obj2.attack("Enemy");
	obj2.takeDamage(20);
	obj2.beRepaired(10);
	return (0);
}
