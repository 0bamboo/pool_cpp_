/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 20:36:52 by abdait-m          #+#    #+#             */
/*   Updated: 2021/11/11 20:59:56 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED
#define FIXED

# include <iostream>

class Fixed
{
	private:
	
		int					value;
		static const int	nbr_frac_bits;

	public:
	
		Fixed(int val);
		Fixed();
		Fixed(const Fixed& copy);
		~Fixed();
		int		getRawBits( void ) const;
		int		get_value( void );
		static const int get_nbr_frac_bits( void );
		void	setRawBits(int const raw);
};

#endif
