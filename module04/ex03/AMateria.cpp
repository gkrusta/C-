/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 13:21:10 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/21 15:23:58 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) {
	std::cout << "Materia constructor called" <<  std::endl;
	_type = type;
}

std::string const&	AMateria::getType() const {
	return (_type);
}

AMateria::AMateria(const AMateria& other) {
	(void)other;
}

AMateria&	AMateria::operator=(const AMateria& other) {
	(void)other;
	return (*this);
}

AMateria::~AMateria () {
	std::cout << "Materia destructor called" << std::endl;
}
