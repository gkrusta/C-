/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 15:33:02 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/14 14:09:25 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("unknown_clap_name"), ScavTrap(), FragTrap() {
	this->_name = "Unknown";
/* 	ClapTrap::(_name + "_clap_name");
 */	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = FragTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
	std::cout << "DiamondTrap default constructor called" <<  std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name) {
	this->_name = name;
	FragTrap::_hitPoints = 100;
	ScavTrap::_energyPoints = 50;
	FragTrap::_attackDamage = 30;
	std::cout << "DiamondTrap constructor called" <<  std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) {
	this->_name = other._name;
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackPoints = other._attackPoints;
	std::cout << "DiamondTrap copy constructor called" <<  std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other) {
	if (this != &other) {
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackPoints = other._attackPoints;
	}
	std::cout << "DiamondTrap copy assignment operator called" << std::endl;
	return *this;
}

DiamondTrap::~DiamondTrap(void) {
	std::cout << "DiamondTrap destructor called" << std::endl;
}

void	DiamondTrap::whoAmI(void) {
	std::cout << "DiamondTrap name: " << this->_name << " ClapTrap name: " << ClapTrap::_name << << std::endl;
}

void	DiamondTrap::attack(const std::string& target) {
	//std::cout << "Diam" << std::endl;
	ScavTrap::attack(target);
}