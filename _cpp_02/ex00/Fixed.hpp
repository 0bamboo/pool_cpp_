/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 20:36:52 by abdait-m          #+#    #+#             */
/*   Updated: 2021/11/11 21:33:56 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED
#define FIXED

# include <iostream>

class Fixed
{
	private:
	
		int					value;
		static const int	nbr_frac_bits = 8;

	public:
	
		Fixed(int val);
		Fixed();
		Fixed(const Fixed& copy);
		~Fixed();
		Fixed  &operator=(const Fixed & copy);
		int		getRawBits( void ) const;
		void	setRawBits(int const raw);
};

#endif
