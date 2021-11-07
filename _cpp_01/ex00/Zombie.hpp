/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 13:38:14 by abdait-m          #+#    #+#             */
/*   Updated: 2021/11/07 13:38:14 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE
# define ZOMBIE

# include <iostream>

class Zombie{

	private:
		std::string	name;
	
	public:
		Zombie(std::string name);
		~Zombie();
		void		announce(void);
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif