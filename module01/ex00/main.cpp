/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 13:07:26 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/02 16:56:13 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie*	newzom = newZombie("Davyd");
	newzom->announce();
	randomChump("Pablo");
	delete(newzom);
	return (0);
}
