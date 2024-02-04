/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 17:47:54 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/04 13:15:14 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string _initialType) {
	this->type = _initialType;
}

void	Weapon::setType(std::string _newWeapon) {
	this->type = _newWeapon;
}

const	std::string& Weapon::getType(void) {
	return (this->type);
}
