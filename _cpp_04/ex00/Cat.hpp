/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 16:00:34 by abdait-m          #+#    #+#             */
/*   Updated: 2021/11/28 01:18:39 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

# include "Animal.hpp"

class	Cat: public Animal{

	public:
		Cat();
		Cat(const Cat& copy);
		~Cat();
		Cat& operator = (Cat const& copy);

		void		makeSound() const;
		std::string	getType() const;
		
};

#endif
