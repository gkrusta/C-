/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 11:47:16 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/21 15:21:38 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

# include <iostream>

class	ICharacter;

class AMateria
{
	protected:
		std::string	_type;
	public:
		AMateria(std::string const & type);
		std::string const& getType() const; //Returns the materia type
		AMateria(const AMateria& other);
		AMateria& operator=(const AMateria& other);
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target) = 0;
		virtual ~AMateria();
};

#endif