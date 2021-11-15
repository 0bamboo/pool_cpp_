/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 20:36:15 by abdait-m          #+#    #+#             */
/*   Updated: 2021/11/15 20:01:08 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
	Fixed a;
	Fixed const b( 10 );
	Fixed const c( 42.42f );
	Fixed const d( b );
	a = Fixed( 1234.4321f );
	
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	return 0;
}


// representation of float in memory: 
// float number : 10.75 = 1010.11 = 1.01011 * 2^3 = normalized form, 
// exponent = 3, sigificant = 1.01011, 
// we allocated 8 bits for the exponent and 23 bit for significant and 1 for sign,
// hence the normalized exponent value will be bias + exponent = 2^7 - 1 + 3 = 130 


// for converting fixed point to float we shift to left for 8 bits
// for converting float to fixed point  we shift to right for 8 bits

// 42.42 = 101010.0110101110 = 1.010100110101110 * 2^5
// 101010.0110101110 * 256binary(shift left for 1) = 10101001101011.1 = 10859.5 , roundf(10859.5) = 10860 