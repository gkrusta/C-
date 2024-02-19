/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 15:06:46 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/19 12:38:49 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"

class	FragTrap : public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string name);
		~FragTrap();
		FragTrap(const FragTrap& other);
		FragTrap&	operator=(const FragTrap& other);
		void	attack(const std::string& target);
		void	highFivesGuys(void);
};

#endif