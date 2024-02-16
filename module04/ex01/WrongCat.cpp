/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCatngCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 14:16:03 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/16 14:24:55 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
	_type = "WrongCat";
	std::cout << "WrongCat default constructor called" <<  std::endl;
}

WrongCat:: WrongCat(std::string& customType) : WrongAnimal(customType.empty() ? "WrongCat" : customType) {
	std::cout << "WrongCat -set type- constructor called" <<  std::endl;
}

WrongCat::WrongCat(const WrongCat& other) {
	_type = other._type;
	std::cout << "WrongCat copy constructor called" <<  std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other) {
	if (this != &other)
		_type = other._type;
	std::cout << "WrongCat copy assignment operator called" << std::endl;
	return *this;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat destructor called" << std::endl;
}

void	WrongCat::makeSound() const {
	std::cout << "Wrong Miau..." << std::endl;
}
