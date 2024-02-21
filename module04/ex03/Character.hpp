/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 13:24:39 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/21 14:29:26 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

# include <iostream>
# include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
	public:
		Character(std::string name);
		~Character();
		Character(const Character& other);
		Character&	operator=(const Character& other);
		//virutal funcions from ICharacter interface
		std::string const& getName() const;
		void	equip(AMateria* m);
		void	unequip(int idx);
		void	use(int idx, ICharacter& target);
		void	printWizardSpells();
		void	printDroppedSpells();
	private:
		std::string	_name;
		AMateria*	_inventory[4]; // Array to store equipped Materias
		static AMateria*	_droppedMaterias[100]; // Array to store unequipped Materias
		static int			_droppedCount;
};

#endif