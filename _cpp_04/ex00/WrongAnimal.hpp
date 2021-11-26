/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 17:04:34 by abdait-m          #+#    #+#             */
/*   Updated: 2021/11/24 17:34:06 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongAnimal_H
# define WrongAnimal_H

# include <iostream>

# define Y "\033[1;33m"
# define S_B "\033[1;36m"
# define R "\033[1;31m"
# define G "\033[1;32m"
# define W "\033[1;37m"
# define DEF "\033[0;37m"

class	WrongAnimal{
	
	protected:
		std::string	type;
	
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal& copy);
		~WrongAnimal();
		WrongAnimal& operator = (WrongAnimal const& copy);

		void		makeSound() const;
		std::string	getType() const;
		
};

#endif