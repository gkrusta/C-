/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 13:21:01 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/19 18:57:12 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("Ice"){
	std::cout << "Ice default constructor called" <<  std::endl;
}

Ice* clone() const {
	return new Ice(*this);
}

void	Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " _type->getname() " *" << std::endl;
}

Ice::~Ice () {
	std::cout << "Ice destructor called" << std::endl;
}