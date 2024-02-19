/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:40:23 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/19 12:49:59 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void) {
	std::cout << "\n===== Testing FragTrap =====" << std::endl;
	FragTrap	humanB("Homer");
	humanB.attack("Bart");
	humanB.beRepaired(2);
	humanB.takeDamage(200);
	FragTrap	humanC;
	humanC = humanB;
	humanC.highFivesGuys();
	humanC.attack("Bart");
	return (0);
}
