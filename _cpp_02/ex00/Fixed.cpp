/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 20:50:16 by abdait-m          #+#    #+#             */
/*   Updated: 2021/11/14 06:18:29 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

Fixed::Fixed(int val)
{
	this->value = val;
}

Fixed::Fixed():value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& copy)
{
	std::cout << "Copy constructor called" << std::endl;
	this->value = copy.getRawBits();
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->value;
}

Fixed  &Fixed::operator=(const Fixed & copy)
{
	std::cout << "Assignation operator called" << std::endl;
	this->value = copy.getRawBits();
	return *this;
}

void	Fixed::setRawBits(int const raw)
{
	this->value = raw;
	std::cout << raw << std::endl;
}
