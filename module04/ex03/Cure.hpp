/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 13:21:04 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/19 14:35:17 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

# include <iostream>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		~Cure();
		Cure* clone() const;
		void use(ICharacter& target);
};

#endif