/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 18:22:25 by abdait-m          #+#    #+#             */
/*   Updated: 2021/11/15 21:13:20 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT
#define POINT

# include "Fixed.hpp"

class Point{
	
	private:
		Fixed const x;
		Fixed const y;

	public:
		Point();
		Point(const Point& copy);
		Point(const float f1, const float f2);
		~Point();
		Point&			operator=(const Point & copy);
		Fixed const&	_get_x_() const;
		Fixed const&	_get_y_() const;

};

bool	bsp( Point const a, Point const b, Point const c, Point const point);
float	_calc_area_(Point const& x, Point const& y, Point const& z);
#endif