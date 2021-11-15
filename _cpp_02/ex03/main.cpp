/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 20:36:15 by abdait-m          #+#    #+#             */
/*   Updated: 2021/11/15 21:59:58 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float	_calc_area_(Point const& p1, Point const& p2, Point const& p3)
{
	float var1 = p1._get_x_().toFloat() * (p2._get_y_().toFloat() - p3._get_y_().toFloat());
	float var2 = p2._get_x_().toFloat() * (p3._get_y_().toFloat() - p1._get_y_().toFloat());
	float var3 = p3._get_x_().toFloat() * (p1._get_y_().toFloat() - p2._get_y_().toFloat());
	
	std::cout << p1._get_x_().toFloat() << "|" << p2._get_y_().toFloat() << "|" << p3._get_y_().toFloat() << "|" << var1 << std::endl;
	std::cout << p2._get_x_().toFloat() << "|" << p3._get_y_().toFloat() << "|" << p1._get_y_().toFloat()<< "|" << var2 << std::endl;
	std::cout << p3._get_x_().toFloat() << "|" << p1._get_y_().toFloat() << "|" << p2._get_y_().toFloat() << "|" << var3 << std::endl;
	return (std::fabs((var1 + var2 + var3) / 2));
}

bool	bsp(Point const a, Point const b, Point const c, Point const point) 
{
	float	abc_area = _calc_area_(a, b, c);
	// float	pab_area = _calc_area_(point, a, b);
	// float	pbc_area = _calc_area_(point, b, c);
	// float	pac_area = _calc_area_(point, a, c);
	(void)point;
	std::cout << abc_area << std::endl;
	return true;
}

int main( void )
{
	Point a(0,0);
	Point b(20, 0);
	Point c(10, 30);
	Point point(10, 15);

	std::cout << a._get_x_().toFloat() << "--" << a._get_y_().toFloat() << std::endl;
	std::cout << b._get_x_().toFloat() << "--" << b._get_y_().toFloat() << std::endl;
	std::cout << c._get_x_().toFloat() << "--" << c._get_y_().toFloat() << std::endl;
	bsp(a, b, c, point);
	return 0;
}
