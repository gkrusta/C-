/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 13:19:00 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/05 17:03:15 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug(void) {
	std::cout << "DEBUG" << std::endl;
}

void	Harl::info(void) {
	std::cout << "INFO" << std::endl;
}

void	Harl::warning(void) {
	std::cout << "WARNING" << std::endl;
}

void	Harl::error(void) {
	
	std::cout << "ERROR" << std::endl;
}

void	Harl::complain(std::string level) {
	void 
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void	(*command)(void) = Harl.get_operation(level[0]);
	switch (op) {
		case '1':
			return &Harl::debug;
		case '2':
			return &Harl::info;
		case '3':
			return &Harl::warning;
		case '4':
			return &Harl::error;
		default:
			return NULL;
	}
}
