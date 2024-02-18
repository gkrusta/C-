/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 19:30:19 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/18 16:34:33 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	std::cout << "Dog default constructor called" <<  std::endl;
	_type = "Dog";
	_dogIdeas = new Brain;
}

Dog:: Dog(std::string customType) : AAnimal(customType.empty() ? "Dog" : customType) {
	std::cout << "Dog -set type- constructor called" <<  std::endl;
}

Dog::Dog(const Dog& other) {
	_type = other._type;
	_dogIdeas = new Brain(*other._dogIdeas);
	std::cout << "Dog copy constructor called" <<  std::endl;
}

Dog& Dog::operator=(const Dog& other) {
	if (this != &other) {
		_type = other._type;
		delete _dogIdeas;
		_dogIdeas = new Brain(*other._dogIdeas);
	}
	std::cout << "Dog copy assignment operator called" << std::endl;
	return *this;
}

Dog::~Dog() {
	delete _dogIdeas;
	std::cout << "Dog destructor called" << std::endl;
}

void	Dog::makeSound() const {
	std::cout << "Vau, vau..." << std::endl;
}

void	Dog::newIdea(std::string idea) {
	_dogIdeas->setIdea(idea);
}

void	Dog::printIdeas() {
	for (int i = 0; i < _dogIdeas->_ideaCount; i++) {
		std::cout << _dogIdeas->getIdea(i) << std::endl;
	}
}