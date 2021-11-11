/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 20:50:16 by abdait-m          #+#    #+#             */
/*   Updated: 2021/11/11 21:08:59 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

Fixed::Fixed(int val)
{
	this->value = val;
}

Fixed::Fixed(){}

Fixed::~Fixed(){}

Fixed::Fixed(const Fixed& copy)
{
	this->value 		= copy.value;
}

int	Fixed::getRawBits(void) const
{
	return 0;
}

void	Fixed::setRawBits(int const raw)
{
	
}
