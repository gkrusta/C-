/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 17:47:42 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/09 11:13:31 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& _newWeapon): humanWeapon(_newWeapon) {
	this->name = name;
}

void	HumanA::attack(void) {
	std::cout << name << " attacks with their " << humanWeapon.getType() << std::endl;
}