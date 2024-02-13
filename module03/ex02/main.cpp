/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:40:23 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/13 15:30:51 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void) {

	std::cout << "===== Testing ClapTrap =====" << std::endl;
	ClapTrap	humanA("Pablo");
	humanA.attack("Enrique");
	humanA.takeDamage(5);
	humanA.beRepaired(2);

	std::cout << "\n===== Testing ScavTrap =====" << std::endl;
	ScavTrap	robot("Robot");
	robot.attack("Zombie");
	robot.takeDamage(50);
	robot.takeDamage(60);
	robot.beRepaired(2);

	std::cout << "\n===== Testing FragTrap =====" << std::endl;
	FragTrap	humanB("Homer");
	humanB.attack("Bart");
	humanB.takeDamage(200);
	humanB.beRepaired(2);
	humanB.highFivesGuys();
	return (0);
}
