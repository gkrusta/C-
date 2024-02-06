/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 13:07:26 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/06 13:22:12 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int	hordSize = 5;
	std::string	commonName = "Homer";
	Zombie	*zombie = zombieHorde(hordSize, commonName);
	delete[] zombie;

	return (0);
}
