/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 15:33:02 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/19 12:58:09 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ScavTrap(), FragTrap() {
	_name = "Unknown";
	ClapTrap::_name = "Unknown_clap_name";
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackPoints = FragTrap::_attackPoints;
	std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ScavTrap(), FragTrap() {
	_name = name;
	ClapTrap::_name = name + "_clap_name";
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackPoints = FragTrap::_attackPoints;
	std::cout << "DiamondTrap constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) {
	_name = other._name;
	ClapTrap::_name = _name + "_clap_name";
	_hitPoints = other._hitPoints;
	_energyPoints = other._energyPoints;
	_attackPoints = other._attackPoints;
	std::cout << "DiamondTrap copy constructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other) {
	if (this != &other) {
		_name = other._name;
		ClapTrap::_name = _name + "_clap_name";
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackPoints = other._attackPoints;
	}
	std::cout << "DiamondTrap copy assignment operator called" << std::endl;
	return *this;
}

DiamondTrap::~DiamondTrap(void) {
	std::cout << "DiamondTrap destructor called" << std::endl;
}

void	DiamondTrap::whoAmI(void) {
	std::cout << "DiamondTrap name: " << _name << "    ClapTrap name: " << ClapTrap::_name << std::endl;
}

void	DiamondTrap::attack(const std::string& target) {
	ScavTrap::attack(target);
}
