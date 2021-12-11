/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 04:56:28 by abdait-m          #+#    #+#             */
/*   Updated: 2021/12/11 05:03:57 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>
void	func_test(T const&	var)
{
	std::cout << var << std::endl;
}

template <typename T>
void	iter(T *array, size_t length, void (*func_test)(T const&))
{
	for (size_t i = 0; i < length; i++)
		func_test(array[i]);
}

#endif
