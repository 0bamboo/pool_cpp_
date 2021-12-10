/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 22:40:31 by abdait-m          #+#    #+#             */
/*   Updated: 2021/12/10 01:23:49 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

struct Data
{
	int				i;
	std::string		str;
	char			c;
	unsigned long long t;
};

uintptr_t		serialize(Data*	ptr)
{
	return (reinterpret_cast<uintptr_t> (ptr));
}

Data*			deserialize(uintptr_t raw)
{
	return (reinterpret_cast <Data*>(raw));
}

int main()
{
	Data	*t = new Data;
	uintptr_t	test;

	t->i = 20;
	t->str = "hello world;";
	t->c = 'A';
	t->t = 99999999999999;

	test = serialize(t);
	std::cout << "------------------ AFTER SERIALIZATION ---------------" << std::endl;
	// int*g =  reinterpret_cast<int*>(test);
	// std::cout << *g << std::endl;
	// test++;
	// std::string *k = reinterpret_cast<std::string *>(test);
	// std::cout << k << std::endl;
	std::cout << "i   : " << t->i << std::endl;
	std::cout << "str : " << t->str << std::endl;
	std::cout << "c   : " << t->c << std::endl;
	std::cout << "ull : " << t->t << std::endl;
	std::cout << "------------------ AFTER DESERIALIZATION ---------------" << std::endl;
	t = deserialize(test);
	std::cout << "i   : " << t->i << std::endl;
	std::cout << "str : " << t->str << std::endl;
	std::cout << "ull : " << t->t << std::endl;
	
	delete t;
}