/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 16:00:41 by abdait-m          #+#    #+#             */
/*   Updated: 2021/11/29 20:13:20 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"
# include "Cat.hpp"
# include "Dog.hpp"

int main()
{
	Animal	*A[10];

	int	i = -1;

	// First half for Cats
	while (++i < 5)
		A[i] = new Cat();
	// Second half for Dogs
	while (i < 10)
		A[i++] = new Dog();

	// Delete all the animals
	i = -1;
	while (++i < 10)
		std::cout << A[i]->getType() << std::endl;
	
	i = -1;
	while (++i < 10)
		delete A[i];
	std::cout << std::endl << "------------------TEST DEEP COPY------------------------------------------------\n\n";
	
	Brain	brain1;
	Brain	brain2;

	brain1._set_idea_("brain 1 --- test 1");
	brain1._set_idea_("brain 1 --- test 2");
	brain2._set_idea_("brain 2 --- test 1");
	
	std::cout << std::endl << "------------------CAT TEST----------------------------\n\n";
	Cat *cat1 = new Cat();
	cat1->_set_brain_(brain1);
	Cat *cat2 = new Cat(*cat1);
	cat1->_set_brain_(brain2);

	std::cout << std::endl << cat1->_get_brain_()._get_idea_(0) << std::endl;
	std::cout << std::endl << cat2->_get_brain_()._get_idea_(0) << std::endl << std::endl;
	
	std::cout << std::endl << "------------------DOG TEST----------------------------\n\n";
	Dog *dog1 = new Dog();
	dog1->_set_brain_(brain1);
	Dog *dog2 = new Dog(*dog1);
	dog1->_set_brain_(brain2);

	std::cout << std::endl << dog1->_get_brain_()._get_idea_(0) << std::endl;
	std::cout << std::endl << dog2->_get_brain_()._get_idea_(0) << std::endl << std::endl;

	

}
