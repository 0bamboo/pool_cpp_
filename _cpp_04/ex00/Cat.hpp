/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 16:00:34 by abdait-m          #+#    #+#             */
/*   Updated: 2021/11/21 17:01:25 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

# include "Animal.hpp"

class	Cat: public Animal{
	
	private:
		std::string	type;
	
	public:
		Cat();
		Cat(const Cat& copy);
		~Cat();
		Cat& operator = (Cat const& copy);

		void		makeSound() const;
		std::string	getType() const;
		
};

#endif
