/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 13:14:52 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/28 11:01:20 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include "Data.hpp"

int	main(void) {
	Data	nb(10);

	uintptr_t	nbRaw = Serializer::serialize(&nb);

	Data*	nbPtr = Serializer::deserialize(nbRaw);
	
	nb.displayData();
	nbPtr->displayData();
	return (0);
}
