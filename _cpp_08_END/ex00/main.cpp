/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 11:00:50 by abdait-m          #+#    #+#             */
/*   Updated: 2021/12/11 11:01:32 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "easyfind.hpp"

int main()
{
	try
	{
		std::vector<int> vec;
		for(size_t i = 0; i < 5; i++)
			vec.push_back(i);
		easyfind(vec, 0);
		easyfind(vec, 1337);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}