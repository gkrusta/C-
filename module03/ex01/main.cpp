/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:40:23 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/19 12:32:57 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

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
	robot.takeDamage(1);
	robot.beRepaired(2);

	ScavTrap	robotNew(robot);
	robot = robotNew;
	robotNew.beRepaired(10);
	robotNew.guardGate();
	return (0);
}
