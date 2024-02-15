/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 19:30:43 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/15 21:05:32 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

# include "Animal.hpp"

class	Dog : public Animal
{
	public:
		Dog();
		Dog(std::string type);
		~Dog();
/* 		Dog(const Dog& other);
		Dog&	operator=(const Dog& other); */
		virtual void	makeSound() const;
};

#endif