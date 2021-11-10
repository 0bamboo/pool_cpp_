/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 13:26:24 by abdait-m          #+#    #+#             */
/*   Updated: 2021/11/07 13:26:24 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie *zombies = (Zombie*) ::operator new (sizeof(Zombie) * N);
	int	i = -1;
    
    while (++i < N)
        new (&zombies[i]) Zombie(name + std::to_string(i));
    return zombies;
}
	