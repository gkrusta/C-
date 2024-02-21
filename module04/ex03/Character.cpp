/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 13:20:48 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/21 17:14:28 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

AMateria*	Character::_droppedMaterias[100] = {nullptr};
int			Character::_droppedCount = 0;

Character::Character(std::string name) {
	_name = name;
	for (int i = 0; i < 4; i++)
		_inventory[i] = nullptr;
}

std::string	const& Character::getName() const {
	return(_name);
}

Character::Character(const Character& other) {
	_name = other._name;
	_droppedCount = other._droppedCount;

	for (int i = 0; i < 4; i++) {
		if (_inventory != nullptr)
			_inventory[i] = other._inventory[i]->clone();
	}
}

// deep copied using clone()
Character&	Character::operator=(const Character& other) {
	if (this != &other) {
		_name = other._name;
		for (int i = 0; i < 4; i++) {
			if (_inventory[i] != nullptr)
				delete _inventory[i];
			_inventory[i] = other._inventory[i]->clone();
		}
	}
	return (*this);
}

void	Character::equip(AMateria* m) {
	for (int i = 0; i < 4; i++) {
		if (_inventory[i] == nullptr) {
			_inventory[i] = m;
			return ;
		}
	}
	std::cout << "Inventory of Materias is full" << std::endl;
}

void	Character::unequip(int idx) {
	if (idx >= 0 && idx <= 3 && _inventory[idx])
	 {
		_droppedMaterias[_droppedCount++] = _inventory[idx];
		_inventory[idx] = nullptr; // Do not delete the Materia, just set the slot to nullptr
	}
	else
		std::cout << "Trying to unequip an unexisting Materia" << std::endl;
}

void	Character::use(int idx, ICharacter& target) {
	if (idx >= 0 && idx <= 3 && _inventory[idx])
		_inventory[idx]->use(target);
	else
		std::cout << "* Trying to use an unexisting Materia *" << std::endl;
}

void	Character::printWizardSpells() {
	std::cout << "\n=== Wizard spells ===" << std::endl;
	for (int i = 0; i < 4; i++) {
		if (!_inventory[i])
			std::cout << i << ": - " << std::endl;
		else
			std::cout << i << ": "<< _inventory[i]->getType() << std::endl;
	}
	std::cout << std::endl;
}

void	Character::printDroppedSpells() {
	std::cout << "\n=== Dropped spells ===" << std::endl;
	for (int i = 0; i < _droppedCount; i++) {
		std::cout << i << ": "<< _droppedMaterias[i]->getType() << std::endl;
	}
	std::cout << std::endl;
}

Character::~Character() {
	for (int i = 0; i < 4; i++)
			delete _inventory[i];
	std::cout << "Character destructor called" << std::endl;
}
