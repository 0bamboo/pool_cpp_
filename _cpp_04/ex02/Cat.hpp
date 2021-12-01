/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 16:00:34 by abdait-m          #+#    #+#             */
/*   Updated: 2021/12/01 01:36:23 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

# include "Animal.hpp"

class	Cat: public Animal{
	
	private:
		Brain	*_brain;
	
	public:
		Cat();
		Cat(Cat const& copy);
		~Cat();
		Cat& operator = (Cat const& copy);

		void		makeSound() const;
		void		_set_brain_(Brain& brain);
		Brain&		_get_brain_() const;
		std::string	getType() const;
		
};

#endif
