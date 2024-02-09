/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 17:47:58 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/09 11:03:05 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>


class	Weapon
{
	public:
		const	std::string& getType(void);
		void	setType(std::string _newWeapon);
		Weapon(std::string _initialType);
	private:
		std::string type;
};

#endif