/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 19:30:43 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/18 16:34:13 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class	Dog : public	AAnimal
{
	public:
		Dog();
		Dog(std::string customType);
		~Dog();
		Dog(const Dog& other);
		Dog&	operator=(const Dog& other);
		void	makeSound() const;
		void	newIdea(std::string idea);
		void	printIdeas();
	private:
		Brain*	_dogIdeas;
};

#endif