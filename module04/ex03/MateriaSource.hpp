/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 19:02:22 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/21 14:50:09 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource();
		~MateriaSource();
		MateriaSource(const MateriaSource& other);
		MateriaSource& operator=(const MateriaSource& other);
		void	learnMateria(AMateria* materia);
		AMateria*	createMateria(std::string const & type);
		void	printBook();
	private:
		AMateria*	_materiaSlot[4];
};

#endif