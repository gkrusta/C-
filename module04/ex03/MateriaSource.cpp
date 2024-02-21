/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 13:20:50 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/21 15:16:27 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	std::cout << "You have acces to Materia book" << std::endl;
	for (int i = 0; i < 4; i++)
		_materiaSlot[i] = nullptr;
}

MateriaSource::MateriaSource(const MateriaSource& other) {
	if (this != &other) {
		for (int i = 0; i < 4; i++)
			_materiaSlot[i] = other._materiaSlot[i]->clone();
	}
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& other) {
	for (int i = 0; i < 4; i++)
		delete _materiaSlot[i];
	if (this != &other) {
		for (int i = 0; i < 4; i++)
			_materiaSlot[i] = other._materiaSlot[i]->clone();
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria* materia) {
	int	i;

	for (i = 0; i < 4; i++) {
		if (!_materiaSlot[i]) {
			_materiaSlot[i] = materia;
			return ;
		}
	}
	if (i == 4) {
		std::cout << "The Materia book is full" << std::endl;
		delete materia;
	}
}

AMateria*	MateriaSource::createMateria(std::string const& type) {
	for (int i = 0; i < 4; i++) {
		if (_materiaSlot[i] && _materiaSlot[i]->getType() == type)
			return _materiaSlot[i]->clone();
	}
	return nullptr;
}

MateriaSource::~MateriaSource() {
	std::cout << "Materia book destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		delete _materiaSlot[i];
}

void	MateriaSource::printBook() {
	std::cout << "\n=== Materia book ===" << std::endl;
	for (int i = 0; i < 4; i++) {
		if (!_materiaSlot[i])
			std::cout << i << ": - " << std::endl;
		else
			std::cout << i << ": "<< _materiaSlot[i]->getType() << std::endl;
	}
	std::cout << std::endl;
}
