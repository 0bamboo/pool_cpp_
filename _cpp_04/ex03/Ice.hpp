/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 17:29:14 by abdait-m          #+#    #+#             */
/*   Updated: 2021/11/30 22:35:58 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
# define ICE_H

# include "AMateria.hpp"

class	Ice : public AMateria{
	
	public:
		Ice();
		Ice(Ice const& obj);
		~Ice();
		Ice& operator = (Ice const& obj);
		
		std::string const&	getType() const;
		AMateria*			clone() const;
		void				use(ICharacter& target);

};

#endif