/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:40:23 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/19 12:59:19 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void) {
	std::cout << "\n===== Testing DiamondTrap =====" << std::endl;
	DiamondTrap		humanA("Pablo");
	DiamondTrap		humanB;
	DiamondTrap		humanC(humanA);
	humanA.attack("Enrique");
	humanB.takeDamage(1);
	humanB.beRepaired(5);
	humanA.whoAmI();
	humanB.whoAmI();
	humanC.whoAmI();
	return (0);
}
