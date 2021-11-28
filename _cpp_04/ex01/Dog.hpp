/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 16:00:38 by abdait-m          #+#    #+#             */
/*   Updated: 2021/11/28 02:30:43 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

# include "Animal.hpp"

class	Dog : public Animal{
	
	private:
		Brain	*_brain;
	
	public:
		Dog();
		Dog(const Dog& copy);
		~Dog();
		Dog& operator = (Dog const& copy);

		void		makeSound() const;
		std::string	getType() const;
		void		_set_brain_(Brain& brain);
		Brain&		_get_brain_();

};

#endif