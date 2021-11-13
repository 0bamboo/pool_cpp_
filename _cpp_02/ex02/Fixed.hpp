/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 20:36:52 by abdait-m          #+#    #+#             */
/*   Updated: 2021/11/13 08:32:36 by abdait-m         ###   ########.fr       */
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
	
		Fixed(const int value);
		Fixed(const float value);
		Fixed();
		Fixed(const Fixed& copy);
		~Fixed();
		Fixed&	operator=(const Fixed& obj);
		bool	operator>(const Fixed& obj);
		bool	operator<(const Fixed& obj);
		bool	operator>=(const Fixed& obj);
		bool	operator<=(const Fixed& obj);
		bool	operator==(const Fixed& obj);
		bool	operator!=(const Fixed& obj);
		Fixed&	operator*(const Fixed& obj);
		Fixed&	operator+(const Fixed& obj);
		Fixed&	operator-(const Fixed& obj);
		Fixed&	operator/(const Fixed& obj);
		Fixed	operator++();
		Fixed	operator++(int);
		Fixed	operator--();
		Fixed	operator--(int);
		static Fixed& max(Fixed& obj_1, Fixed& obj_2);
		static Fixed& min(Fixed& obj_1, Fixed& obj_2);
		int		toInt( void ) const;
		float	toFloat( void ) const;
		static Fixed const& max(Fixed const& obj_1, Fixed const& obj_2);
		static Fixed const& min(Fixed const& obj_1, Fixed const& obj_2);

};

std::ostream& operator<<(std::ostream& c_out, Fixed const& obj);

#endif
