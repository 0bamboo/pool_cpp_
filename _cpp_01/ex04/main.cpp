/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 13:57:10 by abdait-m          #+#    #+#             */
/*   Updated: 2021/11/08 12:55:03 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void _error_msg_()
{
	std::cout << "Wrong arguments or empty arguments ." << std::endl;
	std::cout << "First arg  : [FILENAME]" << std::endl;
	std::cout << "Second arg : [String 1]" << std::endl;
	std::cout << "Third arg  : [String 2]" << std::endl;
}

int _check_empty_str_(char **argv)
{
	std::string arg;
	int i;

	i = 0;
	while (++i < 4)
	{
		arg = argv[i];
		if (arg.length() == 0)
			return (1);
	}
	return (0);
}

void _replace_function_(char **argv)
{
	std::string str_1;
	std::string str_2;
	std::string file_name;
	std::ofstream writef;
	std::ifstream readf;
	std::string line;
	int check;

	file_name = argv[1];
	str_1 = argv[2];
	str_2 = argv[3];
	readf.open(file_name, std::ios::in);
	if (!readf)
	{
		std::cout << "No file with this name !" << std::endl;
		return;
	}
	writef.open(file_name + ".replace");
	while (std::getline(readf, line))
	{
		check = 0;
		if (!readf.eof())
			line.append("\n");
		while (1)
		{
			check = line.find(str_1, check);
			if (check == -1)
				break;
			line.erase(check, str_1.length());
			line.insert(check, str_2);
			check = check + 1;
		}
		writef << line;
		if (readf.eof())
			break;
	}
	readf.close();
	writef.close();
}

int main(int argc, char **argv)
{
	if (argc != 4 || _check_empty_str_(argv))
		_error_msg_();
	else
		_replace_function_(argv);
}