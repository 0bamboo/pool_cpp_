/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 11:00:50 by abdait-m          #+#    #+#             */
/*   Updated: 2021/12/14 09:32:27 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "easyfind.hpp"

int main()
{
	try
	{
		std::vector<int> vect;
		for(size_t i = 0; i < 10; i++)
			vect.push_back(i);
		vect.begin();
		easyfind(vect, 0);
		easyfind(vect, 1337);
	}
	catch(std::exception &exc)
	{
		std::cout << exc.what() << std::endl;
	}
	return (0);
}