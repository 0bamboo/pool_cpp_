/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 13:26:35 by abdait-m          #+#    #+#             */
/*   Updated: 2021/11/07 13:26:35 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int num = 20;
    Zombie *zombies = zombieHorde(num, "Zombie_nbr_");

    for (int i = 0; i < num ; i++)
	{
        zombies[i].announce();
	}

    delete [] zombies;
}