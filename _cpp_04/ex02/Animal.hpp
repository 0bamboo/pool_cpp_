/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 15:56:39 by abdait-m          #+#    #+#             */
/*   Updated: 2021/11/28 09:05:03 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

# include <iostream>
# include "Brain.hpp"

# define Y "\033[1;33m"
# define S_B "\033[1;36m"
# define R "\033[1;31m"
# define G "\033[1;32m"
# define W "\033[1;37m"
# define DEF "\033[0;37m"

class	Animal{
	
	protected:
		std::string	type;
	
	public:
		Animal();
		Animal(const Animal& copy);
		virtual ~Animal();
		Animal& operator = (Animal const& copy);

		virtual void		makeSound() = 0;
		virtual std::string	getType() = 0;
		
};

#endif
