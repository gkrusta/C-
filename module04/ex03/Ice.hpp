/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 13:20:57 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/21 15:21:54 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

# include "AMateria.hpp"
# include "Character.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		~Ice();
		Ice(const Ice& other);
		Ice& operator=(const Ice& other);
		AMateria* clone() const;
		void	use(ICharacter& target);
};

#endif