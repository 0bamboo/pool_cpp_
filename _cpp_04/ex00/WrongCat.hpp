/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 17:09:15 by abdait-m          #+#    #+#             */
/*   Updated: 2021/11/24 19:49:12 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongCat_H
# define WrongCat_H

# include "WrongAnimal.hpp"

class	WrongCat: public WrongAnimal{
	
	private:
		std::string	type;
	
	public:
		WrongCat();
		WrongCat(const WrongCat& copy);
		~WrongCat();
		WrongCat& operator = (WrongCat const& copy);

		void		makeSound() const;
		std::string	getType() const;

};

#endif