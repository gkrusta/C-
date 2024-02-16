/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 14:16:01 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/16 15:57:54 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

# include <iostream>

class	WrongAnimal
{
	public:
		WrongAnimal();
		WrongAnimal(std::string type);
		~WrongAnimal();
		std::string	getWrongType() const;
		WrongAnimal(const WrongAnimal& other);
		WrongAnimal&	operator=(const WrongAnimal& other);
		void	makeSound() const;
	protected:
		std::string	_type;
};

#endif