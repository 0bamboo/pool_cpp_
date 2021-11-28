/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 22:15:16 by abdait-m          #+#    #+#             */
/*   Updated: 2021/11/28 02:21:17 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

# include "Animal.hpp"

class	Brain{
	
	private:
		int			count_ideas;
		std::string	ideas[100];

	public:
		Brain();
		Brain(const Brain& obj);
		Brain&	operator = (Brain const& obj);
		~Brain();
		void			_set_idea_(std::string	idea);
		std::string		_get_idea_(int number = 0);
};

#endif
