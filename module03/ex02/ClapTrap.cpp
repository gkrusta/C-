/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:40:19 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/19 12:48:10 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	this->_name = "Unknown";
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackPoints = 0;
	std::cout << "ClapTrap default constructor called" <<  std::endl;
}

ClapTrap::ClapTrap(std::string name) : _hitPoints(10), _energyPoints(10), _attackPoints(0) {
	this->_name = name;
	std::cout << "ClapTrap constructor called" <<  std::endl;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) {
	this->_name = other._name;
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackPoints = other._attackPoints;
	std::cout << "ClapTrap copy constructor called" <<  std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
	if (this != &other) {
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackPoints = other._attackPoints;
	}
	std::cout << "ClapTrap copy assignment operator called" << std::endl;
	return *this;
}

void	ClapTrap::attack(const std::string& target) {
	if (this->_energyPoints > 0 && this->_hitPoints > 0) {
		this->_energyPoints--;
		std::cout << this->_name << " attacks " << target << " causing " << this->_attackPoints << " points of damage!" << std::endl;
	}
	else
		std::cout << this->_name << " can't atack having no lives and/or no energy :(" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (this->_hitPoints > 0 && amount <= this->_hitPoints && this->_energyPoints > 0) {
		this->_hitPoints -= amount;
		std::cout << this->_name << " takes damage losing " << amount << " points!" << std::endl;
	}
	else if (this->_hitPoints == 0 || this->_energyPoints == 0) {
		std::cout << this->_name << " can't take damage having no lives and/or no energy :(" << std::endl;
	}
	else {
		std::cout << this->_name << " takes damage losing " << this->_hitPoints << " points!" << std::endl;
		this->_hitPoints = 0;
	}
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (this->_energyPoints > 0 && this->_hitPoints > 0) {
		this->_energyPoints--;
		this->_hitPoints += amount;
		std::cout << this->_name << " repaired it's lives for " << amount << " now having " << this->_hitPoints << std::endl;
	}
	else
		std::cout << this->_name << " can't repair having no lives and/or no energy :(" << std::endl;
}
