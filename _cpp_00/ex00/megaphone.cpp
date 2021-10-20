/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 17:23:26 by abdait-m          #+#    #+#             */
/*   Updated: 2021/10/20 17:43:07 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

void	_noise_msg_(void)
{
	std::cout<< "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}

void	_megaphone_(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	while (++i < argc)
	{
		for (j = 0; argv[i][j]; j++)
			std::cout << char(std::toupper(argv[i][j]));
		std::cout<< " ";
	}
	std::cout << std::endl;
}

int main(int argc, char **argv)
{
	if (argc < 2)
		_noise_msg_();
	else
		_megaphone_(argc, argv);
}