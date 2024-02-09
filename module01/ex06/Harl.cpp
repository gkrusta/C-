/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 13:19:00 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/09 11:18:25 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {
	messages[0] = "DEBUG";
	messages[1] = "INFO";
	messages[2] = "WARNING";
	messages[3] = "ERROR";
}

void Harl::debug() {
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "Debug message: I am Harl, providing contextual information for debugging." << std::endl;
}

void Harl::info() {
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "Info message: I am Harl, providing extensive information for program tracing." << std::endl;
}

void Harl::warning() {
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I am Harl, indicating a potential issue that can be handled or ignored." << std::endl;
}

void Harl::error() {
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "I am Harl, reporting an unrecoverable error requiring manual intervention." << std::endl;
}


void	Harl::complain(std::string level) {
	int	i = 0;

	while (i < 4 && messages[i] != level) {
		i++;
	}
	switch (i) {
		case 0:
			debug();
		case 1:
			info();
		case 2:
			warning();
		case 3:
			error();
			break;
		case 4:
			std::cout << "Probably complaining about insignificant problems." << std::endl;
	}
}
