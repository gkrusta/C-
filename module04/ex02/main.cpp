/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:40:23 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/21 15:32:28 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int	main()
{
	std::cout << "===== Creating Dogs and Cats =====" << std::endl;
	int	arrSize = 4;
	AAnimal*	animals[arrSize];
	
	for (int i = 0; i < arrSize; i++) {
		if (i < arrSize / 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	std::cout << "\n===== Giving and printing ideas =====" << std::endl;
	dynamic_cast<Dog*>(animals[0])->newIdea("I am not hungry");
	dynamic_cast<Dog*>(animals[0])->newIdea("Now I am hungry");
	dynamic_cast<Dog*>(animals[0])->newIdea("I am starving");
	dynamic_cast<Cat*>(animals[3])->newIdea("PUSS IN THE BOOTS");

	dynamic_cast<Dog*>(animals[0])->printIdeas();
	dynamic_cast<Cat*>(animals[3])->printIdeas();

	std::cout << "\n===== Testing deep copies of the objects =====" << std::endl;
	Cat	original;
	original.newIdea("Original idea");
	Cat	copy(original);
	copy.newIdea("Added second idea");
	original.printIdeas();
	copy.printIdeas();

	//error: allocating an object of abstract class type 'AAnimal'
	//AAnimal	*corpse = new AAnimal();

	std::cout << "\n===== Making sounds and destorying instances =====" << std::endl;
	for (int i = 0; i < arrSize; i++) {
		animals[i]->makeSound();
		delete animals[i];
	}
	return (0);
}
