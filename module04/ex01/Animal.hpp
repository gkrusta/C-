/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 15:06:46 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/16 14:17:49 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

# include <iostream>

class	Animal
{
	public:
		Animal();
		Animal(std::string type);
		virtual ~Animal();
		std::string	getType() const;
		Animal(const Animal& other);
		Animal&	operator=(const Animal& other);
		virtual void	makeSound() const;
	protected:
		std::string	_type;
};

#endif