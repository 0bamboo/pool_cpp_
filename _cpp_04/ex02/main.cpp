/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 16:00:41 by abdait-m          #+#    #+#             */
/*   Updated: 2021/11/28 09:06:08 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"
# include "Cat.hpp"
# include "Dog.hpp"

int main()
{
	// Animal	*a = new Animal();
	Animal	*cat = new Cat();
	Animal *dog = new Dog();

	dog->makeSound();
	cat->makeSound();

	delete cat;
	delete dog;
}
