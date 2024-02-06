/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 17:47:45 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/06 13:08:00 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

# include <iostream>
# include <string>

# include "Weapon.hpp"

class	HumanA
{
	public:
		HumanA(std::string name, Weapon& _newWeapon);
		void	attack(void);
	private:
	std::string	name;
	Weapon		&humanWeapon;
};

#endif
