/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 16:45:57 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/06 16:56:11 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::cout;
}

Fixed::Fixed(const &Fixed other) {
	std::cout << "" << std::cout;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}
