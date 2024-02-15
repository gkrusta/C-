/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 15:06:46 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/15 21:21:11 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

# include <iostream>

#include "Dog.hpp"
#include "Cat.hpp"
class	Animal
{
	public:
		Animal();
		Animal(std::string type);
		virtual ~Animal();
		std::string	getType() const;
/* 		Animal(const Animal& other);
		Animal&	operator=(const Animal& other); */
		virtual void	makeSound() const;
	protected:
		std::string	_type;
};

#endif