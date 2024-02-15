/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:40:21 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/15 12:27:01 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

# include <iostream>
# include <string>

class	ClapTrap
{
	public:
		ClapTrap();
		ClapTrap(std::string name);
		~ClapTrap();
		ClapTrap(const ClapTrap& other);
		ClapTrap&	operator=(const ClapTrap& other);
		void		attack(const std::string& target, std::string type);
		void		takeDamage(unsigned int amount, std::string type);
		void		beRepaired(unsigned int amount, std::string type);
	protected:
		std::string				_name;
		unsigned int			_hitPoints;
		unsigned int			_energyPoints;
		unsigned int			_attackPoints;
		std::string				_type;
};

#endif
