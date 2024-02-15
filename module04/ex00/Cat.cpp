/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 19:30:35 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/15 21:23:50 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat:: Cat(std::string& customType) : Animal(customType.empty() ? "Cat" : customType) {
	std::cout << "Cat -set type- constructor called" <<  std::endl;
}

Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
}

Cat::getType() {
	return (_type);
}

void	Cat::makeSound() {
	std::cout << "Miau..." << std::endl;
}