/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 11:00:46 by abdait-m          #+#    #+#             */
/*   Updated: 2021/12/11 13:47:39 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <exception>
# include <algorithm>
# include <vector>

template <typename T>
void	easyfind(T& tab, int i)
{
	if (std::find(tab.begin(), tab.end(), i) == tab.end())
		throw std::runtime_error("Occurence not found !");
	std::cout << "Occurence Found !" << std::endl;
}

#endif
