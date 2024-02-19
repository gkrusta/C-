/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 13:21:10 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/19 14:07:16 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) {
	_type = type;
}

std::string const& AMateria::getType() const { //returns a constant reference to the _type variable
	return (_type);
}

AMateria* clone() const {
	return new AMateria(*this);
}

AMateria::~AMateria () {
	std::cout << "AMateria destructor called" << std::endl;
}