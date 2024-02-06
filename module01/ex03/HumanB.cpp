/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 17:47:49 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/06 13:08:24 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
	this->name = name;
	this->humanWeapon = NULL;
}

void	HumanB::setWeapon(Weapon& _newWeapon) {
	humanWeapon = &_newWeapon;
}

void	HumanB::attack(void) {
	if (humanWeapon)
		std::cout << name << " attacks with their " << humanWeapon->getType() << std::endl;
	else
		std::cout << name << " attacks with no weapon! " << std::endl;
}
