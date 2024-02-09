/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 13:19:00 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/09 13:21:46 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {
	messages[0] = "UNKNOWN";
	messages[1] = "DEBUG";
	messages[2] = "INFO";
	messages[3] = "WARNING";
	messages[4] = "ERROR";
}

void Harl::unknown() {
	std::cout << "Unknown complaint level." << std::endl;
}

void Harl::debug() {
	std::cout << "Debug message: I am Harl, providing contextual information for debugging." << std::endl;
}

void Harl::info() {
	std::cout << "Info message: I am Harl, providing extensive information for program tracing." << std::endl;
}

void Harl::warning() {
	std::cout << "Warning message: I am Harl, indicating a potential issue that can be handled or ignored." << std::endl;
}

void Harl::error() {
	std::cout << "Error message: I am Harl, reporting an unrecoverable error requiring manual intervention." << std::endl;
}

void	Harl::complain(std::string level) {
	f_arr	f[] = {&Harl::unknown, &Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	int	i = 0;
	while (i < 5 && messages[i] != level) {
		i++;
	}
	(this->*f[i % 5])();
}
