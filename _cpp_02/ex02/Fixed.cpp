/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 20:50:16 by abdait-m          #+#    #+#             */
/*   Updated: 2021/11/20 00:12:30 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

Fixed::Fixed():value(0)
{
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value)
{
	this->value = value * (1 << this->nbr_frac_bits);
	// std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float value)
{
	this->value = roundf((float)value * (float)(1 << this->nbr_frac_bits));
	// std::cout << "Float constructor called" << std::endl;
}


Fixed::Fixed(const Fixed& copy)
{
	
	// std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}


int		Fixed::toInt( void ) const
{
	return (this->value / (1 << this->nbr_frac_bits));
}

float	Fixed::toFloat( void ) const
{
	return ((float)this->value / (float)(1 << this->nbr_frac_bits));
}

Fixed  &Fixed::operator=(const Fixed & copy)
{
	// std::cout << "Assignation operator called" << std::endl;
	this->value = copy.value;
	return *this;
}

bool	Fixed::operator>(const Fixed& obj)
{
	if (this->value > obj.value)
		return (true);
	return (false);
}

bool	Fixed::operator>=(const Fixed& obj)
{
	if (this->value >= obj.value)
		return (true);
	return (false);
}

bool	Fixed::operator<(const Fixed& obj)
{
	if (this->value < obj.value)
		return (true);
	return (false);
}

bool	Fixed::operator<=(const Fixed& obj)
{
	if (this->value <= obj.value)
		return (true);
	return (false);
}

bool	Fixed::operator!=(const Fixed& obj)
{
	if (this->value != obj.value)
		return (true);
	return (false);
}

Fixed&	Fixed::operator-(const Fixed& obj)
{
	this->value -= obj.value;
	return (*this);
}

Fixed& Fixed::operator+(const Fixed& obj)
{
	this->value += obj.value;
	return (*this);
}

Fixed& Fixed::operator*(const Fixed& obj)
{
	this->value *= obj.toFloat();
	return (*this);
}

Fixed& Fixed::operator/(const Fixed& obj)
{
	if (obj.value != 0)
		this->value /= obj.value;
	return (*this);
}

Fixed& Fixed::max(Fixed& obj_1, Fixed& obj_2)
{
	if (obj_1.value >= obj_2.value)
		return(obj_1);
	return (obj_2);
}

Fixed& Fixed::min(Fixed& obj_1, Fixed& obj_2)
{
	if (obj_1.value <= obj_2.value)
		return(obj_1);
	return (obj_2);
}

Fixed const&	Fixed::max(Fixed const& obj_1, Fixed const& obj_2)
{
	if (obj_1.value >= obj_2.value)
		return (obj_1);
	return (obj_2);
}

Fixed const& Fixed::min(Fixed const& obj_1, Fixed const& obj_2)
{
	if (obj_1.value <= obj_2.value)
		return (obj_1);
	return (obj_2);
}

// ----------- Pre-increment and Pre-decremet operator   -------------- :

Fixed	Fixed::operator++()
{
	this->value++;
	return (*this);
}

Fixed	Fixed::operator--()
{
	this->value--;
	return (*this);
}

// ----------- Post-increment and Post-decrement operator -------------- :

Fixed	Fixed::operator++(int)
{
	Fixed const same(*this);
	++(*this);
	return (same);
}

Fixed	Fixed::operator--(int)
{
	Fixed const same(*this);
	--(*this);
	return (same);
}
// --------------------------------------------------------------------

std::ostream & operator<<(std::ostream & c_out, Fixed const & obj)
{
	c_out << obj.toFloat();
	return c_out;
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}
