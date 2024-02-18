/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 19:30:38 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/18 16:34:19 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class	Cat : public	AAnimal
{
	public:
		Cat();
		Cat(std::string customType);
		~Cat();
		Cat(const Cat& other);
		Cat&	operator=(const Cat& other);
		void	makeSound() const;
		void	newIdea(std::string idea);
		void	printIdeas();
	private:
		Brain*	_catIdeas;
};

#endif