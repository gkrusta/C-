/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 13:21:04 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/21 15:23:44 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

# include "AMateria.hpp"
# include "Character.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		~Cure();
		Cure(const Cure& other);
		Cure& operator=(const Cure& other);
		AMateria* clone() const;
		void	use(ICharacter& target);
};

#endif