/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 12:07:56 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/19 12:36:50 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap() {
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackPoints = 20;
	std::cout << "ScavTrap default constructor called" <<  std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackPoints = 20;
	std::cout << "ScavTrap constructor called" <<  std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) {
	this->_name = other._name;
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackPoints = other._attackPoints;
	std::cout << "ScavTrap copy constructor called" <<  std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
	if (this != &other) {
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackPoints = other._attackPoints;
	}
	std::cout << "ScavTrap copy assignment operator called" << std::endl;
	return *this;
}

void	ScavTrap::attack(const std::string& target) {
	if (this->_energyPoints > 0 && this->_hitPoints > 0) {
		this->_energyPoints--;
		std::cout << "ScavTrap " << this->_name << " attacks " << target << " causing " << this->_attackPoints << " points of damage!" << std::endl;
	}
	else
		std::cout << "ScavTrap " << this->_name << " can't atack having no lives and/or no energy :(" << std::endl;
}

ScavTrap::~ScavTrap(void) {
	std::cout << "ScavTrap destructor called" << std::endl;
}

void	ScavTrap::guardGate() {
	std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode" << std::endl;
}
