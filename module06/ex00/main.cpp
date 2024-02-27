/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 13:14:52 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/27 16:26:04 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	main(int argc, char **argv) {
	if (argc != 2) {
		std::cout << "Pass 1 argument!" << std::endl;
		return (1);
	}
	ScalarConverter::convert(argv[1]);
	return (0);
}
