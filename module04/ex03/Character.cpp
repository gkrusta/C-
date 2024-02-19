/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 13:20:48 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/19 17:48:44 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

// deep copies

Character::Character(std::string name) {
	_name = name;
	for (int i = 0; i < 4; i++) {
		_inventory[i] = nullptr;
	}
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
		_inventory[idx] = nullptr; // Do not delete the Materia, just set the slot to nullptr
	else
		std::cout << "Trying to unequip an unexisting Materia" << std::endl;
}

void	use(int idx, ICharacter& target) {
	
}