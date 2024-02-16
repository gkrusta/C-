/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 14:15:56 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/16 14:22:53 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	_type = "WrongAnmal";
	std::cout << "WrongAnimal default constructor called" <<  std::endl;
}

WrongAnimal::WrongAnimal(std::string type) {
	_type = type;
	std::cout << "WrongAnimal -set type- constructor called" <<  std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) {
	_type = other._type;
	std::cout << "WrongAnimal copy constructor called" <<  std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
	if (this != &other)
		_type = other._type;
	std::cout << "WrongAnimal copy assignment operator called" << std::endl;
	return *this;
}

std::string	WrongAnimal::getWrongType() const {
	return (_type);
}

void	WrongAnimal::makeSound() const {
	std::cout << "***WrongAnmal sound***" << std::endl;
}