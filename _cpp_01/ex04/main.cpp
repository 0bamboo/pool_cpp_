/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 13:57:10 by abdait-m          #+#    #+#             */
/*   Updated: 2021/11/07 15:24:35 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void _error_msg_()
{
	std::cout << "Wrong arguments ." << std::endl;
	std::cout << "First arg  : [FILENAME]" << std::endl;
	std::cout << "Second arg : [String 1]" << std::endl;
	std::cout << "Third arg  : [String 2]" << std::endl;
}

std::string _change_occurence_(std::string line)
{
	return line;
}

void	_replace_function_(char **argv)
{
	std::string		str_1;
	std::string		str_2;
	std::string		file_name;
	std::ofstream	fout;
	std::ifstream	fin;
	std::string		line;
	std::ofstream	result;
	std::fstream	file;

	// file.open("file_name", std::ios::out | std::ios::in);
	// file.open("file_name", std::ios::in);

	file_name = argv[1];
	str_1 = argv[2];
	str_2 = argv[3];
	fout.open(file_name);
	while (std::getline(std::cin, line))
	{
		if (line == "-1")
			break;
		fout << line << std::endl;
	}
	fout.close();
	fin.open(file_name);
	result.open(file_name + ".replace");
	while(std::getline(fin, line))
	{
		line = _change_occurence_(line);
		result << line << std::endl;
	}
	result.close();
	fin.close();
}

int main(int argc, char **argv)
{
	if (argc != 4)
		_error_msg_();
	else
		_replace_function_(argv);
}