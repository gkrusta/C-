/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 19:30:35 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/21 15:31:56 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	std::cout << "Cat default constructor called" <<  std::endl;
	_type = "Cat";
	_catIdeas = new Brain;
}

Cat:: Cat(std::string customType) : AAnimal(customType.empty() ? "Cat" : customType) {
	std::cout << "Cat -set type- constructor called" <<  std::endl;
}

Cat::Cat(const Cat& other) {
	_type = other._type;
	_catIdeas = new Brain(*other._catIdeas);
	std::cout << "Cat copy constructor called" <<  std::endl;
}

Cat& Cat::operator=(const Cat& other) {
	if (this != &other) {
		_type = other._type;
		delete _catIdeas;
		_catIdeas = new Brain(*other._catIdeas);
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

void	Cat::newIdea(std::string idea) {
	_catIdeas->setIdea(idea);
}

void	Cat::printIdeas() {
	for (int i = 0; i < _catIdeas->_ideaCount; i++) {
		std::cout << _catIdeas->getIdea(i) << std::endl;
	}
}
