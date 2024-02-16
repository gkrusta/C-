/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 19:30:19 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/16 19:00:41 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	_type = "Dog";
	_dogIdeas = new Brain;
	std::cout << "Dog default constructor called" <<  std::endl;
}

Dog:: Dog(std::string customType) : Animal(customType.empty() ? "Dog" : customType) {
	std::cout << "Dog -set type- constructor called" <<  std::endl;
}

Dog::Dog(const Dog& other) : Animal(other) {
	_dogIdeas = new Brain(*other._dogIdeas);
	std::cout << "Dog copy constructor called" <<  std::endl;
}

Dog& Dog::operator=(const Dog& other) {
	if (this != &other) {
		_type = other._type;
		delete _dogIdeas; //delete copy brain
		_dogIdeas = new Brain(*other._dogIdeas); //now pointer inside the object points to the same memory location
	}
	std::cout << "Dog copy assignment operator called" << std::endl;
	return *this;
}

Dog::~Dog() {
	delete _dogIdeas;
	std::cout << "Dog destructor called" << std::endl;
}

void	Dog::makeSound() const {
	std::cout << "Miau..." << std::endl;
}
