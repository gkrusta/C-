/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 16:48:08 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/09 11:56:06 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
	Fixed a = 0;
	Fixed b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << "--- comparison operators ---" << std::endl;
	if (a > b)
		std::cout << "a is greater than b" << std::endl;
	else
		std::cout << "a is not greater than b" << std::endl;
	if (a >= b)
		std::cout << "a is greater or equal than b" << std::endl;
	else
		std::cout << "a is not greater or equal than b" << std::endl;
	if (a == b)
		std::cout << "a is equal to b" << std::endl;
	else
		std::cout << "a is not equal to b" << std::endl;
	if (a != b)
		std::cout << "a is not equal to b" << std::endl;
	else
		std::cout << "a is equal to b" << std::endl;

	std::cout << "--- arithmetic operators ---" << std::endl;
	Fixed sum = a + b;
	Fixed difference = a - b;
	Fixed product = a * b;
	Fixed quotient = a / b;

	std::cout << "Sum: " << sum << std::endl;
	std::cout << "Difference: " << difference<< std::endl;
	std::cout << "Product: " << product << std::endl;
	std::cout << "Quotient: " << quotient << std::endl;

	std::cout << "---  increment/decrement ---" << std::endl;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;

	std::cout << "---  min/max ---" << std::endl;
	std::cout << "Maximum: " << Fixed::max( a, b ) << std::endl;
	std::cout << "Minimum: " << Fixed::min( a, b ) << std::endl;

	return 0;
}
