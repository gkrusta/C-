/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 13:21:01 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/21 15:21:51 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice"){
	std::cout << "Ice default constructor called" <<  std::endl;
}

AMateria* Ice::clone() const {
	return new Ice(*this);
}

Ice::Ice(const Ice& other) : AMateria("ice") {
	(void)other;
}

Ice&	Ice::operator=(const Ice& other) {
	(void)other;
	return (*this);
}

void	Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice::~Ice () {
	std::cout << "Ice destructor called" << std::endl;
}