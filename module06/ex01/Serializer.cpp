/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 16:19:14 by gkrusta           #+#    #+#             */
/*   Updated: 2024/04/07 13:32:35 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer() {
}

Serializer::~Serializer() {
}

Serializer::Serializer(Serializer& other) {
	*this = other;
}

Serializer&	Serializer::operator=(Serializer& other) {
	(void)other;
	return *this;
}

// uintptr_t as the intermediate type to hold the integer representation of the pointer
uintptr_t	Serializer::serialize(Data* ptr) {
	return (reinterpret_cast<uintptr_t>(ptr));
}

// cast an unsigned integer to a pointer to Data
Data*	Serializer::deserialize(uintptr_t raw) {
	return (reinterpret_cast<Data*>(raw));
}
