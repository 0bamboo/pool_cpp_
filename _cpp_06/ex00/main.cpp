/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 21:30:24 by abdait-m          #+#    #+#             */
/*   Updated: 2021/12/07 22:33:04 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Convert.hpp"

int main(int argc, char **argv)
{
	try
	{
		Convert	runProgram(argv, argc);
	}
	catch(const std::exception& exc)
	{
		std::cout << R << "Program Ended !\n" << DEF;
	}
}