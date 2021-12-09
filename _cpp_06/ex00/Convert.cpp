/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 21:53:52 by abdait-m          #+#    #+#             */
/*   Updated: 2021/12/09 22:50:58 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Convert.hpp"

Convert::Convert(char	**tab, int argc)
{
	this->is_float	= 0;
	this->_ps_		= 0;
	this->cha_r		= "";
	this->in_t 		= "";
	try
	{
		if (argc != 2)
			throw WrongArgs("Too Many Arguments !\n");
		this->str_convert = tab[1];
		if (this->_wrong_arg())
			throw WrongArgs("Wrong Argument !\n");
		if (this->is_float && this->str_convert[0] == '.')
			this->str_convert = '0' + this->str_convert;
		if (!this->_ps_)
			this->_start_converting();
	}
	catch (const std::exception& exc)
	{
		std::cout << R << exc.what() << DEF;
		throw ;
	}
}

void	Convert::_pseudo_()
{
	if (this->str_convert == "nan" || this->str_convert == "+inf" || this->str_convert == "-inf" || this->str_convert == "inf")
	{
		this->_ps_ = 1;
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << std::stof(this->str_convert) << "f" << std::endl;
		std::cout << "double: " << std::stod(this->str_convert) << std::endl;
	}
}

bool	Convert::_wrong_arg()
{
	int		count_dot = 0;
	_pseudo_();
	if (!this->_ps_)
	{
		if (this->str_convert.size() == 1)
			return (_if_char());
		for(size_t i = 0; i < this->str_convert.size(); i++)
		{
			if (i == 0 && (this->str_convert[i] == '-' || this->str_convert[i] == '+') && std::isdigit(this->str_convert[1]))
				continue ;
			if (this->str_convert[i] == '.' && (i != this->str_convert.size() - 1))
			{
				if (count_dot == 0)
				{
					this->is_float = 1;
					count_dot = 1;
					continue;
				}
				else
					return true;
			}
			else if (this->str_convert[i] == 'f')
			{
				if (i != (this->str_convert.size() - 1))
					return true;
				continue ;
			}
			if (this->str_convert[i] < '0' || this->str_convert[i] > '9')
				return true;
		}
	}
	return false;
}

int		Convert::_convert_char()
{
	try
	{
		this->c_int = std::stoi(this->str_convert);
		std::cout << this->c_int << std::endl;
		this->in_t = std::to_string(this->c_int);
		if (this->c_int <= 127 && this->c_int >= -128)
		{
			if (!std::isprint(this->c_int))
				this->cha_r = "Non displayable";
			else
			{
				this->c_char = this->c_int;
				this->cha_r = this->c_char;
				this->cha_r = "'" + this->cha_r + "'";
			}
		}
		else
			this->cha_r = "impossible";
		return (1);
	}
	catch(std::exception& e)
	{
		this->cha_r = "impossible";
		this->in_t = "impossible";
		return (0);
	}
}

int		Convert::_convert_int()
{
	this->in_t = std::to_string(this->c_int);
	return (1);
}

int		Convert::_convert_float()
{
	try
	{
		this->c_float = std::stof(this->str_convert);
		if (this->str_convert.find('.') == std::string::npos || this->str_convert[this->str_convert.size() - 2] == '.')
			std::cout << "float: " << std::fixed << std::setprecision(1) << this->c_float << "f" << std::endl;
		else if (this->str_convert[this->str_convert.size() - 1] == 'f' && this->str_convert[this->str_convert.size() - 2] == '.')
			std::cout << "float: " << std::fixed << std::setprecision(1) << this->c_float << "f" << std::endl;
		else if (this->str_convert.find('f') - this->str_convert.find('.') == 2)
			std::cout << "float: " << std::fixed << std::setprecision(1) << this->c_float << "f" << std::endl;
		else
			std::cout << "float: " << std::fixed << std::setprecision(2) << this->c_float << "f" << std::endl;
		return (1);
	}
	catch(const std::exception& e)
	{
		std::cout << "float: " << "impossible" << std::endl;
		return (0);
	}
}

int		Convert::_convert_double()
{
	try
	{
		this->c_double = std::stod(this->str_convert);
		if (this->str_convert.find('.') == std::string::npos || this->str_convert[this->str_convert.size() - 2] == '.')
			std::cout << "double: " << std::fixed << std::setprecision(1) << this->c_double << std::endl;
		else if (this->str_convert[this->str_convert.size() - 1] == 'f' && this->str_convert[this->str_convert.size() - 2] == '.')
			std::cout << "double: " << std::fixed << std::setprecision(1) << this->c_double << std::endl;
		else
			std::cout << "double: " << std::fixed << std::setprecision(2) << this->c_double << std::endl;
		return (1);
	}
	catch(const std::exception& e)
	{
		std::cout << "double: " << "impossible" << std::endl;
		return (0);
	}
}

bool	Convert::_if_char()
{
	if (!std::isdigit(this->str_convert[0]))
		this->str_convert = std::to_string((int)this->str_convert[0]);
	return false;
}

void	Convert::_start_converting()
{
	_convert_char();
	std::cout <<"char: " << this->cha_r << std::endl;
	std::cout << "int: " << this->in_t << std::endl;
	_convert_float();
	_convert_double();
}

Convert::WrongArgs::WrongArgs(std::string errorMsg):_error_(errorMsg) { }

const char*	Convert::WrongArgs::what() const throw()
{
	return (this->_error_.c_str());
}

Convert::WrongArgs::~WrongArgs() throw() { }

Convert::~Convert() { }
