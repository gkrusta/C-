/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 13:20:53 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/21 12:36:16 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

// IMateriaSource class defines a set of virtual functions
// that any derived class must implement

#include "AMateria.hpp"

class IMateriaSource
{
	public:
		virtual ~IMateriaSource() {}
		virtual void learnMateria(AMateria* materia) = 0;
		virtual AMateria* createMateria(std::string const & type) = 0;
		virtual void	printBook() = 0;
};

#endif