/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 15:06:48 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/19 13:01:17 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap() {
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackPoints = 30;
	std::cout << "FragTrap default constructor called" <<  std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackPoints = 30;
	std::cout << "FragTrap constructor called" <<  std::endl;
}

FragTrap::FragTrap(const FragTrap& other) {
	this->_name = other._name;
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackPoints = other._attackPoints;
	std::cout << "FragTrap copy constructor called" <<  std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other) {
	if (this != &other) {
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackPoints = other._attackPoints;
	}
	std::cout << "FragTrap copy assignment operator called" << std::endl;
	return *this;
}

void	FragTrap::attack(const std::string& target) {
	if (this->_energyPoints > 0 && this->_hitPoints > 0) {
		this->_energyPoints--;
		std::cout << "FragTrap " << this->_name << " attacks " << target << " causing " << this->_attackPoints << " points of damage!" << std::endl;
	}
	else
		std::cout << "FragTrap " << this->_name << " can't atack having no lives and/or no energy :(" << std::endl;
}

FragTrap::~FragTrap(void) {
	std::cout << "FragTrap destructor called" << std::endl;
}

void	FragTrap::highFivesGuys(void) {
	std::cout << "FragTrap " << this->_name << " requests high fives from everyone!" << std::endl;
}
