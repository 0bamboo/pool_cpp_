/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 18:22:13 by abdait-m          #+#    #+#             */
/*   Updated: 2021/11/14 18:34:05 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Point.hpp"

Point::Point() {}

Point::Point(const float f1, const float f2):x(f1) , y(f2) {}

Point::Point(const Point& copy)
{
	*this = copy;
}

Point::~Point(){}

bool	Point::bsp(Point const a, Point const b, Point const c, Point const point) 
{
	return true;
}