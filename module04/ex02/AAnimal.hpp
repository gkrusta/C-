/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 15:06:46 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/18 16:29:32 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

# include <iostream>

class	AAnimal
{
	public:
		AAnimal();
		AAnimal(std::string type);
		virtual ~AAnimal();
		std::string	getType() const;
		AAnimal(const AAnimal& other);
		AAnimal&	operator=(const AAnimal& other);
// In c++ a class is abstract if it has at least one pure virtual member function
		virtual void	makeSound() const = 0;
	protected:
		std::string	_type;
};

#endif