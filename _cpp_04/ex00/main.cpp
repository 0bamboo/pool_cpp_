/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 16:00:41 by abdait-m          #+#    #+#             */
/*   Updated: 2021/11/21 17:14:17 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"
# include "Cat.hpp"
# include "Dog.hpp"
# include "WrongAnimal.hpp"
# include "WrongCat.hpp"

int main()
{
	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	delete j;
	delete i;
	delete meta;

	std::cout << std::endl << "SECOND TEST : ======================" << std::endl << std::endl;
	
	const WrongAnimal *a = new WrongAnimal();
	const WrongAnimal *wcat = new WrongCat();
	
	std::cout << a->getType() << " " << std::endl;
	std::cout << wcat->getType() << " " << std::endl;
	a->makeSound(); 
	wcat->makeSound();
	
	delete wcat;
	delete a;
}
