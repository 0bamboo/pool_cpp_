/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 11:02:35 by abdait-m          #+#    #+#             */
/*   Updated: 2021/12/14 02:14:41 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "span.hpp"

int main()
{
	try
	{
		span	test(10000);
		
		// srand(time(NULL));
		// std::vector<int> v;
		// for (int i = 0; i < 10000 - 1; i++)
		// 	v.push_back(rand() % 10000);
		// test.addNumber(v.begin(), v.end());
		// v.insert(v.begin(), v.end());

		for (int i = -2; i < 9997 ; i++)
			test.addNumber(i);

		test.addNumber(-7);
		std::cout << "ShortestSpan : " << test.shortestSpan() << std::endl;
		std::cout << "longestSpan : " << test.longestSpan() << std::endl;

		// Error :
		// test.addNumber(32);
	}
	catch(const std::exception& exc)
	{
		std::cerr << exc.what() << '\n';
	}

	// span sp = span(5);
	// sp.addNumber(5);
	// sp.addNumber(3);
	// sp.addNumber(17);
	// sp.addNumber(9);
	// sp.addNumber(11);
	// std::cout << sp.shortestSpan() << std::endl;
	// std::cout << sp.longestSpan() << std::endl;
	
}