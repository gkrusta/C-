/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 13:21:06 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/19 14:34:00 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure"){
	std::cout << "Cure default constructor called" <<  std::endl;
}

Cure* clone() const {
	return new Cure(*this);
}

void	Cure::use(ICharacter& target) {
	std::cout << "* heals " _type.getName() "'s wounds *" << std::endl;
}

Cure::~Cure () {
	std::cout << "Cure destructor called" << std::endl;
}