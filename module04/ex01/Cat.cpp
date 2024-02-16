/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 19:30:35 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/16 18:48:07 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	_type = "Cat";
	_catIdeas = new Brain;
	std::cout << "Cat default constructor called" <<  std::endl;
}

Cat:: Cat(std::string customType) : Animal(customType.empty() ? "Cat" : customType) {
	std::cout << "Cat -set type- constructor called" <<  std::endl;
}

Cat::Cat(const Cat& other) : Animal(other) {
	_catIdeas = new Brain(*other._catIdeas);
	std::cout << "Cat copy constructor called" <<  std::endl;
}

Cat& Cat::operator=(const Cat& other) {
	if (this != &other) {
		_type = other._type;
		delete _catIdeas; //delete copy brain
		_catIdeas = new Brain(*other._catIdeas); //now pointer inside the object points to the same memory location
	}
	std::cout << "Cat copy assignment operator called" << std::endl;
	return *this;
}

Cat::~Cat() {
	delete _catIdeas;
	std::cout << "Cat destructor called" << std::endl;
}

void	Cat::makeSound() const {
	std::cout << "Miau..." << std::endl;
}
