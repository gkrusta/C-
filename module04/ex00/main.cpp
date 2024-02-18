/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:40:23 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/18 13:19:33 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int	main()
{
	//Virtual functions should be accessed using a pointer or reference of 
	//base class type to achieve runtime polymorphism.
	{
		std::cout << "=====Testing Dog&Cat=====" << std::endl;
		const Animal* meta = new Animal("Domasticated animal");
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		std::cout << "\nAnimal type: " << meta->getType() << std::endl;
		std::cout << "Dog type: " << j->getType() << std::endl;
		std::cout << "Cat type: " << i->getType() << std::endl;
		i->makeSound();
		j->makeSound();
		meta->makeSound();
		delete i;
		delete j;
		delete meta;
	}
	{
		std::cout << "=====Testing WrongCat=====" << std::endl;
		const WrongAnimal* meta = new WrongAnimal();
		const WrongAnimal* i = new WrongCat();

		std::cout << "\nAnimal type: " << meta->getWrongType() << std::endl;
		std::cout << "Cat type: " << i->getWrongType() << std::endl;
		i->makeSound();
		meta->makeSound();
		delete i;
		delete meta;
	}
	return 0;
}
