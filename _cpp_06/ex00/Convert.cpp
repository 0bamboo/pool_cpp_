/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 21:53:52 by abdait-m          #+#    #+#             */
/*   Updated: 2021/12/07 22:51:43 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Convert.hpp"

Convert::Convert(char	**tab, int argc)
{
	//set the str_convert
	try
	{
		if (argc != 2)
			throw WrongArgs("Too Many Arguments !\n");
		this->str_convert = tab[1];
		if (this->_wrong_arg())
			throw WrongArgs("Wrong Argument !\n");
		// this->_start_converting_();
	}
	catch (const std::exception& exc)
	{
		std::cout << R << exc.what() << DEF;
		throw ;
	}
}

bool	Convert::_wrong_arg() const
{
	for(size_t i = 0; i < this->str_convert.size(); i++)
	{
		if ((this->str_convert[i] == '-' || this->str_convert[i] == '+') && i == 0)
			continue ;
		if (this->str_convert[i] < '0' || this->str_convert[i] > '9')
			return true;
	}
	return false;
}

// void	Convert::_start_converting() const
// {
	
// }

Convert::WrongArgs::WrongArgs(std::string errorMsg):_error_(errorMsg) { }

const char*	Convert::WrongArgs::what() const throw()
{
	return (this->_error_.c_str());
}

Convert::WrongArgs::~WrongArgs() throw() { }

Convert::~Convert() { }
