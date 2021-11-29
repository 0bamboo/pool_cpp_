/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 17:47:40 by abdait-m          #+#    #+#             */
/*   Updated: 2021/11/29 20:23:06 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "AMateria.hpp"

class	Character : public ICharacter{
	
	private:
		std::string	name;
		int			count;
		AMateria *array[4];

	public:
		Character();
		Character(Character const& obj);
		Character(std::string name);
		Character&	operator = (Character const& obj);
		~Character();

		std::string	const&	getName() const;
		void				equip(AMateria *m);
		void				unequip(int idx);
		void				use(int idx, ICharacter& target);

};

#endif