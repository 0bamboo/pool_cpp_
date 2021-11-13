/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 20:50:16 by abdait-m          #+#    #+#             */
/*   Updated: 2021/11/13 01:26:36 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

Fixed::Fixed():value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value)
{
	this->value = value * (1 << this->nbr_frac_bits);
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float value)
{
	this->value = roundf((float)value * (float)(1 << this->nbr_frac_bits));
	std::cout << "Float constructor called" << std::endl;
}


Fixed::Fixed(const Fixed& copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return 0;
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << raw << std::endl;
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
	std::cout << "Assignation operator called" << std::endl;
	if (this != &copy)
		this->value = copy.value;
	return *this;
}

std::ostream & operator<<(std::ostream & c_out, Fixed const & obj)
{
	c_out << obj.toFloat();
	return c_out;
}


Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
