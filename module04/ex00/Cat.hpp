/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 19:30:38 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/15 21:16:43 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

# include "Animal.hpp"

class	Cat : public Animal
{
	public:
		Cat();
		Cat(std::string type);
		~Cat();
/* 		Cat(const Cat& other);
		Cat&	operator=(const Cat& other); */
		virtual void	makeSound() const ;
};

#endif