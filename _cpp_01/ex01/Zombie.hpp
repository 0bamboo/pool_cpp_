/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 13:26:41 by abdait-m          #+#    #+#             */
/*   Updated: 2021/11/07 13:26:41 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE
# define ZOMBIE

# include <iostream>
# include <string>

class Zombie{

	private:
		std::string	name;
	
	public:
		Zombie();
		Zombie(std::string name);
		void	_set_(std::string name);
		~Zombie();
		void		announce(void);
};

Zombie	*zombieHorde(int N, std::string name);

#endif