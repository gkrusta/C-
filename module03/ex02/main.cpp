/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:40:23 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/15 13:22:36 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void) {
	std::cout << "\n===== Testing FragTrap =====" << std::endl;
	FragTrap	humanB("Homer");
	humanB.attack("Bart");
	humanB.takeDamage(200);
	humanB.beRepaired(2);
	humanB.highFivesGuys();
	return (0);
}
