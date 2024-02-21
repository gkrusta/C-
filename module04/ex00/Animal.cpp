/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 15:06:46 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/21 17:14:44 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
	_type = "Animal";
	std::cout << "Animal default constructor called" <<  std::endl;
}

Animal::Animal(std::string type) {
	_type = type;
	std::cout << "Animal -set type- constructor called" <<  std::endl;
}

Animal::~Animal() {
	std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal(const Animal& other) {
	_type = other._type;
	std::cout << "Animal copy constructor called" <<  std::endl;
}

Animal& Animal::operator=(const Animal& other) {
	if (this != &other)
		_type = other._type;
	std::cout << "Animal copy assignment operator called" << std::endl;
	return *this;
}

std::string	Animal::getType() const {
	return (_type);
}

void	Animal::makeSound() const {
	std::cout << "***Animal sound***" << std::endl;
}
