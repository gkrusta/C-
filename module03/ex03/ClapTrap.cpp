/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:40:19 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/14 19:11:00 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	this->_name = "Unknown";
	this->_type = "ClapTrap";
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackPoints = 0;
	std::cout << "ClapTrap default constructor called" <<  std::endl;
}

ClapTrap::ClapTrap(std::string name) {
	this->_name = name;
	this->_type = "ClapTrap";
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackPoints = 0;
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

void	ClapTrap::attack(const std::string& target, std::string type) {
	if (this->_energyPoints > 0 && this->_attackPoints <= this->_hitPoints && this->_energyPoints > 0) {
		this->_energyPoints--;
		std::cout << type << " attacks " << target << " causing " << this->_attackPoints << " points of damage!" << std::endl;
	}
	else {
		this->_hitPoints = 0;
		std::cout << type << " can't atack having no lives and/or no energy :(" << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount, std::string type) {
	if (this->_hitPoints > 0 && amount <= this->_hitPoints && this->_energyPoints > 0) {
		this->_hitPoints -= amount;
		std::cout << type << " takes damage losing " << amount << " points!" << std::endl;
	}
	else if (this->_hitPoints == 0){
		std::cout << type << " can't take damage having no lives and/or no energy :(" << std::endl;
	}
	else {
		std::cout << type << " takes damage losing " << this->_hitPoints << " points!" << std::endl;
		this->_hitPoints = 0;
	}
}

void	ClapTrap::beRepaired(unsigned int amount, std::string type) {
	if (this->_energyPoints > 0) {
		this->_energyPoints--;
		this->_hitPoints += amount;
		std::cout << type << " repaired it's lives for " << amount << " now having " << this->_hitPoints << std::endl;
	}
	else
		std::cout << type << " can't repair having no energy :(" << std::endl;
}
