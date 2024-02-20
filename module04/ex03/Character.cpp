/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 13:20:48 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/20 12:38:54 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

AMateria*	Character::_dropeddMterias[100] = {nullptr};
int			Character::_dropedCount = 0;

Character::Character(std::string name) {
	_name = name;
	_droppedMaterias = 0;
	_dropedCount = 0;
	_inventory[4] = {nullptr};
}

Character::Character(const Character& other) {
	_name = other._name;
	_dropedCount = other._dropedCount;
	
	for (int i = 0; i < 100; i++) {
		if (i < 4)
			_inventory[i] = other._inventory[i];
		_dropedMaterias[i] = other._dropedMaterias[i];
	}
}
// deep copied using clone()
Character&	Character::operator=(const Character& other) {
	if (this != &other) {
		_name = other._name;
		_dropedCount = other._dropedCount;
		delete _inventory;
		delete _dropedMaterias;
		for (int i = 0; i < 100; i++) {
			if (i < 4)
				_inventory[i] = other._inventory[i];
			_dropedMaterias[i] = other._dropedMaterias[i];
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

void	unequip(int idx) {
	if (idx >= 0 && idx <= 3 && _inventory[idx] != nulptr)
	 {
		_droppedMaterias[_dropedCount++] = _inventory[idx];
		_inventory[idx] = nullptr; // Do not delete the Materia, just set the slot to nullptr
	}
	else
		std::cout << "Trying to unequip an unexisting Materia" << std::endl;
}

void	use(int idx, ICharacter& target) {
	
}

Character::~Character() {
	for (int i = 0; i < 4; i++)
		delete _invenotory[i];
	std::cout << "Character destructor called" << std::endl;
}
