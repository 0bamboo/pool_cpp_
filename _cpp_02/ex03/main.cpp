/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 20:36:15 by abdait-m          #+#    #+#             */
/*   Updated: 2021/11/17 18:46:53 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float	_calc_area_(Point const& p1, Point const& p2, Point const& p3)
{
	float var1 = p1._get_x_().toFloat() * (p2._get_y_().toFloat() - p3._get_y_().toFloat());
	float var2 = p2._get_x_().toFloat() * (p3._get_y_().toFloat() - p1._get_y_().toFloat());
	float var3 = p3._get_x_().toFloat() * (p1._get_y_().toFloat() - p2._get_y_().toFloat());

	return (std::fabs((var1 + var2 + var3) / 2));
}

bool	bsp(Point const a, Point const b, Point const c, Point const point) 
{
	float	abc_area = _calc_area_(a, b, c);
	float	pab_area = _calc_area_(point, a, b);
	float	pbc_area = _calc_area_(point, b, c);
	float	pac_area = _calc_area_(point, a, c);
	
	std::cout << pac_area << std::endl;
	if (abc_area == 0 || pab_area == 0 || pbc_area == 0 || pac_area == 0)
		return (false);
	else if (abc_area == pab_area + pac_area + pbc_area)
		return (true);
	else
		return (false);
}

int main( void )
{
	// the point is on the edge of the triangle 
	// Point a(4,9);
	// Point b(6, 2);
	// Point c(2, 2);
	// Point point(4, 9);

	// the point is outside the triangle 
	// Point a(4,9);
	// Point b(6, 2);
	// Point c(2, 2);
	// Point point(4, 9);
	
	// the point is a vertex means outside of triangle 
	Point a(5,1);
	Point b(1, 5);
	Point c(1, 1);
	Point point(2, 1);

	// the point is insdie the triangle 
	// Point a(1,1);
	// Point b(3, 1);
	// Point c(1, 2);
	// Point point(1.5, 1.4);


	if (bsp(a, b, c, point))
		std::cout << "The point is inside the triangle ." << std::endl;
	else
		std::cout << "The point is outside the triangle ." << std::endl;
	return (0);
}
