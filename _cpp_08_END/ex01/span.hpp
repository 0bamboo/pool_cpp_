/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 11:02:40 by abdait-m          #+#    #+#             */
/*   Updated: 2021/12/14 02:03:48 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <iterator>

class	span{
	
	private:
		std::vector<int>	vect;
		unsigned int		length;
		span&	operator = (const span& obj);
		span();
	
	public:
		span(const span& obj);
		span(unsigned int n);
		~span();

		void	addNumber(int num);
		void	addNumber(std::vector<int>::iterator first,  std::vector<int>::iterator end);
		int		shortestSpan();
		int		longestSpan();
		
};

#endif
