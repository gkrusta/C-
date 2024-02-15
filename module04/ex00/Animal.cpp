/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 15:06:46 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/15 21:23:47 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
	std::cout << "Animal default constructor called" <<  std::endl;
}

Animal::Animal(std::string type) {
	_type = type;
	std::cout << "Animal -set type- constructor called" <<  std::endl;
}

Animal::~Animal() {
	std::cout << "Animal destructor called" << std::endl;
}

std::string	Animal::getType() const {
	return (_type);
}

void	Animal::makeSound() const {
	std::cout << "Muuuuuuu..." << std::endl;
}
