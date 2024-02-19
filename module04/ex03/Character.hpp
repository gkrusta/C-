/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 13:24:39 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/19 14:50:34 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

# include <iostream>
# include "ICharacter.hpp"

class Character : public ICharacter
{
	public:
		Character(std::string name);
		Character(std::string &name);
		~Character();
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
	private:
		std::string	_name;
};

#endif