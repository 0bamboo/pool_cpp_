/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 20:36:52 by abdait-m          #+#    #+#             */
/*   Updated: 2021/11/15 20:53:41 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED
#define FIXED

# include <iostream>
# include <cmath>

class Fixed
{
	private:
	
		int					value;
		static const int	nbr_frac_bits = 8;

	public:
	
		Fixed(const int val);
		Fixed(const float val);
		Fixed();
		Fixed(const Fixed& copy);
		~Fixed();
		Fixed&   operator=(const Fixed & copy);
		int		toInt( void ) const;
		float	toFloat( void ) const;
		int		getRawBits( void ) const;
		void	setRawBits(int const raw);
};

#endif
