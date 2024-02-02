/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 10:47:19 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/02 16:46:12 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name) {
	Zombie*	arrZombie = new Zombie[N];

	for (int i = 0; i < N; i++) {
		arrZombie[i].setName(name);
		arrZombie[i].announce();
	}
	return (arrZombie);
}
