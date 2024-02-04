/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 17:45:51 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/04 14:24:14 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

# include <iostream>
# include <string>

# include "Weapon.hpp"

class	HumanB
{
	public:
		HumanB(std::string name);
		void	setWeapon(Weapon& _newWeapon);
		void	attack(void);
	private:
		std::string name;
		Weapon	*humanWeapon;
};

#endif
