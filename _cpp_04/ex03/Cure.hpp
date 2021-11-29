/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 17:09:24 by abdait-m          #+#    #+#             */
/*   Updated: 2021/11/29 17:18:33 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_H
# define CURE_H

# include "AMateria.hpp"

class	Cure : public AMateria{
	
	public:
		Cure();
		Cure(Cure const& obj);
		~Cure();
		Cure& operator = (Cure const& obj);
		
		std::string const&	getType() const;
		AMateria*			clone() const;
		void				use(ICharacter& target);

};

#endif