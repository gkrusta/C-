/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 16:19:16 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/27 16:25:03 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

# include <iostream>

class	Serializer {
	public:
		static uintptr_t	serialize(Data* ptr);
		static Data*	deserialize(uintptr_t raw);
	private:
		Serializer();
		~Serializer();
};

#endif