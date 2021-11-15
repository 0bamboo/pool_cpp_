/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 20:36:15 by abdait-m          #+#    #+#             */
/*   Updated: 2021/11/15 21:19:41 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float	_calc_area_(Point const& px, Point const& py, Point const& pz)
{
	return ((px._get_x_().toFloat() * (py._get_y_().toFloat() - pz._get_y_().toFloat()) \
			+ (py._get_x_().toFloat() * (pz._get_y_().toFloat() - px._get_y_().toFloat())) \
			+ (pz._get_x_().toFloat() * (px._get_y_().toFloat() - py._get_y_().toFloat()))) / 2);
}

bool	bsp(Point const a, Point const b, Point const c, Point const point) 
{
	float	abc_area = _calc_area_(a, b, c);
	// float	pab_area = _calc_area_(point, a, b);
	// float	pbc_area = _calc_area_(point, b, c);
	// float	pac_area = _calc_area_(point, a, c);
	
	std::cout << a._get_x_().toFloat() << std::endl;
	std::cout << abc_area << std::endl;
	point.~Point();
	return true;
}

int main( void )
{
	Point a(1, 1);
	Point b(4, 2);
	Point c(3, 5);
	Point point(2.33, 2);

	std::cout << a._get_x_().toFloat() << std::endl;
	bsp(a, b, c, point);
	return 0;
}
