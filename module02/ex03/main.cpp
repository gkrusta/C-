/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 13:29:58 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/09 17:27:53 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int	main(void) {
	Point	a;
	Point	b(5,5);
	Point	c(10,0);
	Point	p(5,1);

	if (bsp(a, b, c, p))
		std::cout << "The point is inside the triangle" << std::endl;
	else
		std::cout << "The point is not inside the triangle" << std::endl;
	return (0);
}