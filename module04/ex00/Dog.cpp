/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 19:30:19 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/15 20:55:19 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog:: Dog(std::string& customType) : Animal(customType.empty() ? "Dog" : customType) {
	std::cout << "Dog -set type- constructor called" <<  std::endl;
}

Dog::~Dog() {
	std::cout << "Dog destructor called" << std::endl;
}

Dog::getType() {
	return (_type);
}

void	Dog::makeSound() {
	std::cout << "Vau vau..." << std::endl;
}