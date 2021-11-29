/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 21:38:52 by abdait-m          #+#    #+#             */
/*   Updated: 2021/11/29 21:42:59 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class	MateriaSource : public IMateriaSource{
	
	public:
		MateriaSource();
		MateriaSource(MateriaSource const& obj);
		MateriaSource&	operator = (MateriaSource const& obj);
		~MateriaSource();

		void		learnMateria(AMateria*);
		AMateria*	createMateria(std::string const& type);

};

#endif