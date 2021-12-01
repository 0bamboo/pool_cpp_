/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 21:38:52 by abdait-m          #+#    #+#             */
/*   Updated: 2021/12/01 18:31:03 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# define Max_Materials 4

class	MateriaSource : public IMateriaSource{
	
	private:
		AMateria *materials[4];

	public:
		MateriaSource();
		MateriaSource(MateriaSource const& obj);
		MateriaSource&	operator = (MateriaSource const& obj);
		~MateriaSource();

		void		learnMateria(AMateria*);
		AMateria*	createMateria(std::string const& type);

};

#endif
