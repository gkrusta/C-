/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 15:06:46 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/18 15:20:31 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() {
	_type = "Animal";
	std::cout << "Animal default constructor called" <<  std::endl;
}

AAnimal::AAnimal(std::string type) {
	_type = type;
	std::cout << "Animal -set type- constructor called" <<  std::endl;
}

AAnimal::~AAnimal() {
	std::cout << "Animal destructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal& other) {
	_type = other._type;
	std::cout << "Animal copy constructor called" <<  std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal& other) {
	if (this != &other)
		_type = other._type;
	std::cout << "Animal copy assignment operator called" << std::endl;
	return *this;
}

std::string	AAnimal::getType() const {
	return (_type);
}

void	AAnimal::makeSound() const {
	std::cout << "***Animal sound***" << std::endl;
}
