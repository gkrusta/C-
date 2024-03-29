/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 16:19:21 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/28 11:00:57 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data() {
	_nb = 42;
	std::cout << "Data default constructor called" <<  std::endl;
}

Data::Data(int nb) {
	_nb = nb;
	std::cout << "Data constructor called" <<  std::endl;
}

Data::~Data() {
	std::cout << "Data destructor called" <<  std::endl;
}

Data::Data(const Data& other) {
	_nb = other._nb;
	std::cout << "Data copy constructor called" <<  std::endl;
}

Data& Data::operator=(const Data& other) {
	if (this != &other)
		_nb = other._nb;
	std::cout << "Data copy assignment operator called" << std::endl;
	return *this;
}

void	Data::displayData(void) {
	std::cout << "data is: " << _nb << std::endl;
}