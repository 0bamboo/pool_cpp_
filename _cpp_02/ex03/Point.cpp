/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 18:22:13 by abdait-m          #+#    #+#             */
/*   Updated: 2021/11/15 21:33:43 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Point.hpp"

Point::Point():x(0), y(0) {}

Point::Point(const float f1, const float f2):x(f1) , y(f2) {}

Point::Point(const Point& copy): x(copy.x) , y(copy.y) {}

Fixed const&	Point::_get_x_() const
{
	return (this->x);
}

Point&			Point::operator=(const Point& copy)
{
	(void)copy;
	return (*this);
}

Fixed const&	Point::_get_y_() const
{
	return (this->y);
}

Point::~Point(){}
